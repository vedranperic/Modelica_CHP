within MVEMLib.Basic.Sources;
model ForcedMassFlow
  extends MVEMLib.Basic.Restrictions.Partial.IdealRestriction;
  Modelica.Blocks.Interfaces.RealInput dm "Mass flow rate in kg/s"
    annotation (Placement(transformation(
        origin={0,-98},
        extent={{-10,-10},{10,10}},
        rotation=90)));
equation
  // The properties of the flow depends on the flow direction
  gas.T  = if dm > 0 then InPut.T else  OutPut.T;
  gas.p  = if dm > 0 then InPut.p else  OutPut.p;
  gas.Xi = if dm > 0 then InPut.Xi else OutPut.Xi;
  InPut.dm = dm;
  annotation (Icon(graphics={
        Line(points={{-80,8},{68,8}}, color={0,0,255}),
        Line(points={{-80,-8},{68,-8}}, color={0,0,255}),
        Line(points={{60,20},{80,0}}, color={0,0,255}),
        Line(points={{80,0},{60,-20}}, color={0,0,255}),
        Line(points={{-70,0},{-50,0}}, color={0,0,255}),
        Line(points={{-30,0},{-10,0}}, color={0,0,255}),
        Line(points={{12,0},{32,0}}, color={0,0,255}),
        Line(points={{48,0},{68,0}}, color={0,0,255})}));
end ForcedMassFlow;
