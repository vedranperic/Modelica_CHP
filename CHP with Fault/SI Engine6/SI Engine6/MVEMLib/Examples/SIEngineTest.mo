within MVEMLib.Examples;
model SIEngineTest "Constantspeed test of SI Engine"
  Engines.Combustion.SIEngine sIEngine
    annotation (Placement(transformation(extent={{2,0},{22,20}})));
  Modelica.Mechanics.Rotational.Sources.Speed ForcedSpeed
    annotation (Placement(transformation(extent={{2,40},{22,60}})));
  Modelica.Blocks.Sources.Constant EngineSpeed(k=1500) "Speed in RPM"
    annotation (Placement(transformation(extent={{-60,40},{-40,60}})));
  Modelica.Blocks.Math.UnitConversions.From_rpm from_rpm
    annotation (Placement(transformation(extent={{-30,40},{-10,60}})));
  Modelica.Blocks.Sources.Step step(
    startTime=5,
    height=0.3,
    offset=0.05)
    annotation (Placement(transformation(extent={{-38,0},{-18,20}})));
equation
  connect(ForcedSpeed.flange, sIEngine.CrankShaft) annotation (Line(
      points={{22,50},{32,50},{32,10},{22,10}},
      color={0,0,0},
      smooth=Smooth.None));
  connect(from_rpm.u, EngineSpeed.y) annotation (Line(
      points={{-32,50},{-39,50}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(ForcedSpeed.w_ref, from_rpm.y) annotation (Line(
      points={{-6.66134e-16,50},{-9,50}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(step.y, sIEngine.TqRef) annotation (Line(
      points={{-17,10},{1.6,10}},
      color={0,0,127},
      smooth=Smooth.None));
  annotation (Diagram(graphics),
    experiment(StopTime=15, Tolerance=1e-05),
    experimentSetupOutput);
end SIEngineTest;
