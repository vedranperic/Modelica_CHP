within ;
model CHP
  Modelica.Electrical.Machines.BasicMachines.AsynchronousInductionMachines.AIM_SquirrelCage
    aimc(
    p=aimcData.p,
    fsNominal=aimcData.fsNominal,
    Rs=aimcData.Rs,
    TsRef=aimcData.TsRef,
    alpha20s(displayUnit="1/K") = aimcData.alpha20s,
    Lszero=aimcData.Lszero,
    Lssigma=aimcData.Lssigma,
    Jr=aimcData.Jr,
    Js=aimcData.Js,
    frictionParameters=aimcData.frictionParameters,
    wMechanical(displayUnit="rad/s", start=162.315),
    statorCoreParameters=aimcData.statorCoreParameters,
    strayLoadParameters=aimcData.strayLoadParameters,
    Lm=aimcData.Lm,
    Lrsigma=aimcData.Lrsigma,
    Rr=aimcData.Rr,
    TrRef=aimcData.TrRef,
    phiMechanical(fixed=true),
    TsOperational=293.15,
    alpha20r=aimcData.alpha20r,
    TrOperational=293.15) annotation (Placement(transformation(extent={{-44,0},
            {-24,20}})));
  Modelica.Electrical.MultiPhase.Sources.SineVoltage sineVoltage(
    final m=3,
    freqHz={50,50,50},
    V={sqrt(2/3)*400,sqrt(2/3)*400,sqrt(2/3)*400})
                                   annotation (Placement(transformation(
        origin={-82,42},
        extent={{-10,-10},{10,10}},
        rotation=270)));
  Modelica.Electrical.MultiPhase.Basic.Star star(final m=3) annotation (
      Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-82,12})));
  Modelica.Electrical.Analog.Basic.Ground ground annotation (Placement(
        transformation(
        origin={-82,-18},
        extent={{-10,-10},{10,10}})));
  parameter Modelica.Electrical.Machines.Utilities.ParameterRecords.AIM_SquirrelCageData
                                                            aimcData(Jr=0.29)
    annotation (Placement(transformation(extent={{-42,-54},{-22,-34}})));
  MVEMLib.Engines.Combustion.SIEngine sIEngine annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={20,32})));
  Modelica.Blocks.Sources.Constant const(k=1)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=0,
        origin={6,70})));
  Modelica.Electrical.Machines.Sensors.MechanicalPowerSensor powerSensor
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={24,-8})));
  Modelica.Electrical.Machines.Utilities.TerminalBox terminalBox
    annotation (Placement(transformation(extent={{-42,16},{-24,34}})));
  Modelica.Blocks.Sources.BooleanPulse booleanPulse(
    width=0.3,
    period=100,
    startTime=0.7)
    annotation (Placement(transformation(extent={{-88,70},{-68,90}})));
  Modelica.Electrical.MultiPhase.Ideal.IdealOpeningSwitch switch(
    m=3,
    Ron={0,0,0},
    Goff={0,0,0}) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-32,52})));
equation
  connect(star.pin_n,ground. p) annotation (Line(points={{-82,2},{-82,-8}},
                      color={0,0,255}));
  connect(sineVoltage.plug_n,star. plug_p)
    annotation (Line(points={{-82,32},{-82,22}}, color={0,0,255}));
  connect(const.y, sIEngine.TqRef) annotation (Line(points={{17,70},{-8,70},{-8,
          32},{9.6,32}},  color={0,0,127}));
  connect(sIEngine.CrankShaft, powerSensor.flange_a)
    annotation (Line(points={{30,32},{36,32},{36,-8},{34,-8}}, color={0,0,0}));
  connect(powerSensor.flange_b, aimc.flange) annotation (Line(points={{14,-8},{
          -4,-8},{-4,10},{-24,10}}, color={0,0,0}));
  connect(aimc.plug_sp, terminalBox.plug_sp) annotation (Line(points={{-28,20},
          {-28,19.6},{-27.6,19.6}},          color={0,0,255}));
  connect(aimc.plug_sn, terminalBox.plug_sn) annotation (Line(points={{-40,20},
          {-40,19.6},{-38.4,19.6}},          color={0,0,255}));
  connect(switch.plug_n, sineVoltage.plug_p) annotation (Line(points={{-32,62},
          {-58,62},{-58,52},{-82,52}}, color={0,0,255}));
  connect(switch.plug_p, terminalBox.plugSupply)
    annotation (Line(points={{-32,42},{-33,42},{-33,21.4}}, color={0,0,255}));
  connect(switch.control[1], booleanPulse.y) annotation (Line(points={{-45.3333,
          52},{-56,52},{-56,80},{-67,80}}, color={255,0,255}));
  connect(booleanPulse.y, switch.control[2]) annotation (Line(points={{-67,80},
          {-56,80},{-56,52},{-44,52}}, color={255,0,255}));
  connect(booleanPulse.y, switch.control[3]) annotation (Line(points={{-67,80},
          {-56,80},{-56,52},{-42.6667,52}}, color={255,0,255}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    uses(MVEMLib(version="1.0.2"), Modelica(version="3.2.3")));
end CHP;
