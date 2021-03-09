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
    statorCoreParameters=aimcData.statorCoreParameters,
    strayLoadParameters=aimcData.strayLoadParameters,
    Lm=aimcData.Lm,
    Lrsigma=aimcData.Lrsigma,
    Rr=aimcData.Rr,
    TrRef=aimcData.TrRef,
    phiMechanical(fixed=true),
    TsOperational=293.15,
    alpha20r=aimcData.alpha20r,
    TrOperational=293.15) annotation (Placement(transformation(extent={{-42,-20},
            {-22,0}})));
  Modelica.Electrical.Machines.Sensors.CurrentQuasiRMSSensor
                                         currentQuasiRMSSensor
    annotation (Placement(transformation(
        origin={-32,30},
        extent={{-10,10},{10,-10}},
        rotation=270)));
  Modelica.Electrical.MultiPhase.Sources.SineVoltage sineVoltage(
    final m=3,
    freqHz={50,50,50},
    V={sqrt(2/3)*220,sqrt(2/3)*220,sqrt(2/3)*220})
                                   annotation (Placement(transformation(
        origin={-80,40},
        extent={{-10,-10},{10,10}},
        rotation=270)));
  Modelica.Electrical.MultiPhase.Basic.Star star(final m=3) annotation (
      Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-82,14})));
  Modelica.Electrical.Analog.Basic.Ground ground annotation (Placement(
        transformation(
        origin={-82,-18},
        extent={{-10,-10},{10,10}})));
  Modelica.Electrical.Machines.Utilities.TerminalBox
                                 terminalBox(terminalConnection="D")
    annotation (Placement(transformation(extent={{-42,-4},{-22,16}})));
  parameter Modelica.Electrical.Machines.Utilities.ParameterRecords.AIM_SquirrelCageData
                                                            aimcData
    annotation (Placement(transformation(extent={{-42,-50},{-22,-30}})));
  MVEMLib.Engines.Combustion.SIEngine sIEngine annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={28,28})));
  Modelica.Blocks.Sources.Constant const(k=1)
    annotation (Placement(transformation(extent={{-16,50},{4,70}})));
  Modelica.Electrical.Machines.Sensors.MechanicalPowerSensor powerSensor
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={26,-10})));
equation
  connect(star.pin_n,ground. p) annotation (Line(points={{-82,4},{-82,-8}},
                      color={0,0,255}));
  connect(sineVoltage.plug_n,star. plug_p)
    annotation (Line(points={{-80,30},{-80,28},{-82,28},{-82,24}},
                                                 color={0,0,255}));
  connect(terminalBox.plug_sn,aimc. plug_sn) annotation (Line(
      points={{-38,0},{-38,0}},
      color={0,0,255}));
  connect(terminalBox.plug_sp,aimc. plug_sp) annotation (Line(
      points={{-26,0},{-26,0}},
      color={0,0,255}));
  connect(terminalBox.plugSupply,currentQuasiRMSSensor. plug_n)
    annotation (Line(
      points={{-32,2},{-32,20}},
      color={0,0,255}));
  connect(sineVoltage.plug_p,currentQuasiRMSSensor. plug_p) annotation (
      Line(
      points={{-80,50},{-32,50},{-32,40}}, color={0,0,255}));
  connect(const.y, sIEngine.TqRef) annotation (Line(points={{5,60},{10,60},{10,
          28},{17.6,28}}, color={0,0,127}));
  connect(sIEngine.CrankShaft, powerSensor.flange_a)
    annotation (Line(points={{38,28},{38,-10},{36,-10}}, color={0,0,0}));
  connect(powerSensor.flange_b, aimc.flange)
    annotation (Line(points={{16,-10},{-22,-10}}, color={0,0,0}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    uses(MVEMLib(version="1.0.2"), Modelica(version="3.2.3")));
end CHP;
