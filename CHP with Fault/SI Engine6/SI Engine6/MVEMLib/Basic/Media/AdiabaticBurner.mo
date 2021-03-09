within MVEMLib.Basic.Media;
model AdiabaticBurner
  "Transformes unburned gas to burned gas at the same pressure"
  replaceable package fuelAirMedium = FuelAirMixture annotation(choicesAllMatching=true);
  Interfaces.GasPort UnburnedInPut(redeclare replaceable package Medium =
                fuelAirMedium.unburnedMedium)
    annotation (extent=[-110,-10; -90,10], Placement(transformation(extent={{
            -110,-10},{-90,10}}, rotation=0)));
  Interfaces.GasPort BurnedOutPut( redeclare replaceable package Medium =
                fuelAirMedium.burnedMedium)
    annotation (extent=[90,-10; 110,10], Placement(transformation(extent={{90,
            -10},{110,10}}, rotation=0)));
    Modelica.Blocks.Interfaces.RealOutput dh annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={0,110})));
protected
  Real dummyOutput;
  //Real qHV_approx;
  fuelAirMedium.unburnedMedium.BaseProperties unburnedGas;
  fuelAirMedium.burnedMedium.BaseProperties burnedGas;
equation
  unburnedGas.p  = burnedGas.p;
  unburnedGas.p  = BurnedOutPut.p;
  unburnedGas.T  = burnedGas.T;
  unburnedGas.T  = BurnedOutPut.T;
  unburnedGas.Xi = UnburnedInPut.dmXi/UnburnedInPut.dm;
  burnedGas.Xi   = BurnedOutPut.dmXi/BurnedOutPut.dm;

  UnburnedInPut.p=BurnedOutPut.p;
  UnburnedInPut.T=BurnedOutPut.T;
  UnburnedInPut.Xi = fuelAirMedium.unburnedMedium.reference_X[1:fuelAirMedium.unburnedMedium.nXi];
  BurnedOutPut.dm = -UnburnedInPut.dm;
  dh = fuelAirMedium.burnedMedium.specificInternalEnergy(burnedGas.state)-fuelAirMedium.unburnedMedium.specificInternalEnergy(unburnedGas.state);
  //if UnburnedInPut.dmXi[3] > 0 then
  //  UnburnedInPut.dmXi[3]*qHV_approx = UnburnedInPut.dm*(fuelAirMedium.burnedMedium.specificInternalEnergy(burnedGas.state)-fuelAirMedium.unburnedMedium.specificInternalEnergy(unburnedGas.state));
  //else
  //  qHV_approx = 0;
  //end if;

  BurnedOutPut.dH = -UnburnedInPut.dH;
  (BurnedOutPut.dmXi,dummyOutput) = fuelAirMedium.calcBurnedFractions(UnburnedInPut.dmXi,BurnedOutPut.T);
      annotation (Diagram(graphics),
                         Icon(
      graphics={
        Text(
          extent={{-100,40},{-20,20}},
          lineColor={0,0,255},
          textString=
               "Unburned"),
        Line(points={{-80,2},{-30,2}}, color={255,128,0}),
        Line(points={{-80,-2},{-30,-2}}, color={255,128,0}),
        Text(
          extent={{-100,100},{100,80}},
          lineColor={0,0,255},
          textString=
               "%name"),
        Line(points={{32,-2},{80,-2}}, color={208,0,0}),
        Line(points={{32,2},{80,2}}, color={208,0,0}),
        Text(
          extent={{20,-20},{100,-40}},
          lineColor={0,0,255},
          textString=
               "Burned"),
        Line(points={{-30,-2},{-34,-10},{-22,-14},{-44,-32},{-12,-30},{2,-48},{
              26,-34},{18,-22},{30,-20},{36,-14},{32,-2},{32,10},{42,18},{44,46},
              {12,22},{-6,46},{-12,22},{-38,10},{-30,2},{-30,-2}}, color={0,0,0}),

        Line(points={{-26,-2},{-30,-8},{-18,-14},{-36,-28},{-10,-28},{2,-44},{
              22,-34},{14,-20},{30,-18},{34,-14},{30,-2},{30,10},{38,18},{42,42},
              {12,20},{-6,40},{-10,20},{-34,10},{-26,2},{-26,-2}}, color={0,0,0}),

        Line(points={{80,-80},{68,-92}}, color={0,0,255}),
        Line(points={{-80,-80},{80,-80},{66,-70}}, color={0,0,255})},
      Text(
        extent=[-100,40; -20,20],
        style(color=3, rgbcolor={0,0,255}),
        string="Unburned"),
      Line(points=[-80,2; -30,2],
                               style(
          color=45,
          rgbcolor={255,128,0},
          fillColor=1,
          rgbfillColor={255,0,0},
          fillPattern=1)),
      Line(points=[-80,-2; -30,-2],
                                 style(
          color=45,
          rgbcolor={255,128,0},
          fillColor=1,
          rgbfillColor={255,0,0},
          fillPattern=1)),
      Text(
        extent=[-100,100; 100,80],
        style(color=3, rgbcolor={0,0,255}),
        string="%name"),
      Line(points=[32,-2; 80,-2], style(
          color=42,
          rgbcolor={208,0,0},
          fillColor=1,
          rgbfillColor={255,0,0},
          fillPattern=1)),
      Line(points=[32,2; 80,2], style(
          color=42,
          rgbcolor={208,0,0},
          fillColor=1,
          rgbfillColor={255,0,0},
          fillPattern=1)),
      Text(
        extent=[20,-20; 100,-40],
        style(color=3, rgbcolor={0,0,255}),
        string="Burned"),
      Line(points=[-30,-2; -34,-10; -22,-14; -44,-32; -12,-30; 2,-48; 26,-34;
            18,-22; 30,-20; 36,-14; 32,-2; 32,10; 42,18; 44,46; 12,22; -6,46;
            -12,22; -38,10; -30,2; -30,-2], style(color=0, rgbcolor={0,0,0})),
      Line(points=[-26,-2; -30,-8; -18,-14; -36,-28; -10,-28; 2,-44; 22,-34; 14,
            -20; 30,-18; 34,-14; 30,-2; 30,10; 38,18; 42,42; 12,20; -6,40; -10,
            20; -34,10; -26,2; -26,-2], style(color=0, rgbcolor={0,0,0})),
      Line(points=[80,-80; 68,-92],
                                  style(
          color=3,
          rgbcolor={0,0,255},
          fillColor=58,
          rgbfillColor={0,115,0},
          fillPattern=1)),
      Line(points=[-80,-80; 80,-80; 66,-70],
                                          style(
          color=3,
          rgbcolor={0,0,255},
          fillColor=58,
          rgbfillColor={0,115,0},
          fillPattern=1))));
end AdiabaticBurner;
