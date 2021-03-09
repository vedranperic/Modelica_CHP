within MVEMLib.Engines.Combustion.Parts;
model SpeedDensityEngineFlow
  "Models for flow of air or air/fuel mixture through engine"
  extends MVEMLib.Basic.Restrictions.Partial.IdealRestriction;
  parameter SI.Volume Vd =   0.5575e-3 "Engine displacement";
  parameter Real rc =        9.2 "Compression ratio";
  parameter Real C =         0.8 "Volumetric constant";
  parameter Real nCyl =      4 "Number of cylinders";
//  parameter Real      n_r   = 2         "Number of revolutions per cycle";
  // Define i/o
  Modelica.Blocks.Interfaces.RealInput wEng
    annotation (Placement(transformation(
        origin={0,-90},
        extent={{-10,-10},{10,10}},
        rotation=90)));
  // Intermediate calculation variables
protected
  Real gamma;
equation
  // The flowing medium is from InPut for engines
  gas.T  = InPut.T;
  gas.p  = InPut.p;
  gas.Xi = InPut.Xi;
  // Calculate some necessary properties
  gamma = Medium.isentropicExponent(gas.state);
  InPut.dm = (InPut.p * (rc - (OutPut.p / InPut.p) ^ (1 / gamma)) * C / (rc -1) * Vd * nCyl / 4 / MC.pi / gas.R * wEng / InPut.T);
  annotation (Diagram(graphics),
                       Icon(graphics={
        Text(
          extent={{0,-80},{100,-100}},
          lineColor={0,0,255},
          textString=
               "wEng"),
        Line(points={{-50,28},{-50,-22}}, color={0,0,255}),
        Line(points={{-58,-22},{-42,-22}}, color={0,0,255}),
        Line(points={{-66,36},{-66,-16}}, color={0,0,255}),
        Line(points={{-34,36},{-34,-16}}, color={0,0,255}),
        Line(points={{-54,4},{-58,-18},{-60,-22},{-64,-26},{-66,-28}}, color={0,
              0,255}),
        Line(points={{-58,6},{-62,-16},{-64,-20},{-68,-24},{-70,-26}}, color={0,
              0,255}),
        Line(points={{-42,4},{-38,-14},{-36,-18},{-32,-22},{-28,-24}}, color={0,
              0,255}),
        Line(points={{-46,2},{-42,-18},{-40,-22},{-36,-26},{-32,-28}}, color={0,
              0,255}),
        Line(points={{50,28},{50,-22}}, color={0,0,255}),
        Line(points={{42,-22},{58,-22}}, color={0,0,255}),
        Line(points={{34,36},{34,-16}}, color={0,0,255}),
        Line(points={{66,36},{66,-16}}, color={0,0,255}),
        Line(points={{46,4},{42,-18},{40,-22},{36,-26},{34,-28}}, color={0,0,
              255}),
        Line(points={{42,6},{38,-16},{36,-20},{32,-24},{30,-26}}, color={0,0,
              255}),
        Line(points={{58,4},{62,-14},{64,-18},{68,-22},{72,-24}}, color={0,0,
              255}),
        Line(points={{54,2},{58,-18},{60,-22},{64,-26},{68,-28}}, color={0,0,
              255})}));
end SpeedDensityEngineFlow;
