within MVEMLib.Engines.Combustion;
model SIEngine "A simple SI engine with intake and exhaust manifold as well as throttle."
  // --------------------------------------------------------------------
  //                       MVEMLib for Modelica
  // A Mean Value Engine Library for simulation of SI and CI engines
  // --------------------------------------------------------------------
  // Copyright (C) 2012  Per Öberg
  //
  // This program is free software: you can redistribute it and/or modify
  // it under the terms of the GNU General Public License as published by
  // the Free Software Foundation, either version 3 of the License, or
  // (at your option) any later version.
  //
  // This program is distributed in the hope that it will be useful,
  // but WITHOUT ANY WARRANTY; without even the implied warranty of
  // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  // GNU General Public License for more details.
  //
  // You should have received a copy of the GNU General Public License
  // along with this software.  If not, see <http://www.gnu.org/licenses/>.
  //
  // Primary author: Per Öberg <per.oberg@liu.se>
  extends Parts.Partial.PartialEngine(engineInertia(
      phi(start=10, displayUnit="rad"),
      w(fixed=false, start=157.07),
      J=4.5,
      a(start=0)));
  replaceable package fuelAirMedium = Basic.Media.FuelAirMixture annotation (
    choicesAllMatching = true);
  Basic.Media.FuelAirMixer fuelAirMixer(redeclare replaceable package
      fuelAirMedium =
        fuelAirMedium)                                                                               annotation (
    Placement(transformation(origin = {80, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  Basic.Volumes.FixedVolume intakeManifold(redeclare replaceable package Medium =
        fuelAirMedium.airMedium,                                                                           VStart = 0.0018, pStart = 101300 * 0.90) annotation (
    Placement(transformation(extent = {{14, 44}, {34, 64}}, rotation = 0)));
  MVEMLib.Basic.Sources.ConstantGasReference ambiantAir(redeclare replaceable
      package Medium =
        fuelAirMedium.airMedium,                                                                                        T = 298, p = 101500) annotation (
    Placement(visible = true, transformation(extent = {{-190, 44}, {-170, 64}}, rotation = 0)));
  Basic.Sources.ConstantGasReference fuel(redeclare replaceable package Medium =
        fuelAirMedium.fuelMedium)                                                                          annotation (
    Placement(transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  MVEMLib.Engines.Combustion.Parts.SpeedDensityEngineFlow engineFlow(redeclare
      replaceable package Medium =
        fuelAirMedium.airMedium,
    Vd=0.0007,
    rc=13,                       nCyl=3)                                                                                             annotation (
    Placement(transformation(origin = {70, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  Modelica.Blocks.Sources.Constant const(k = fuelAirMedium.AFs) annotation (
    Placement(transformation(extent = {{-60, 80}, {-38, 100}}, rotation = 0)));
  Basic.Sensors.MassFlowSensor massFlow(redeclare replaceable package Medium =
        fuelAirMedium.airMedium)                                                                        annotation (
    Placement(transformation(extent = {{-20, 44}, {0, 64}}, rotation = 0)));
  Modelica.Blocks.Math.Division fuelDemand annotation (
    Placement(transformation(extent = {{0, 80}, {20, 100}}, rotation = 0)));
  Basic.Sources.ForcedMassFlow forcedMassFlow(redeclare replaceable package
      Medium =
        fuelAirMedium.fuelMedium)                                                                              annotation (
    Placement(transformation(origin = {90, 62}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  MVEMLib.Basic.Sources.ConstantGasReference ExhaustGasSource(redeclare
      replaceable package Medium =
        Basic.Media.FuelAirMixture.burnedMedium, T=518.75)                                                                                                annotation (
    Placement(visible = true, transformation(extent = {{-102, -148}, {-82, -128}}, rotation = 0)));
  //Real burnedGasComposition[fuelAirMedium.burnedMedium.nXi];
  //Real dummyOutput;
  MVEMLib.Basic.Media.AdiabaticBurner adiabaticBurner(redeclare package
      fuelAirMedium =
        Basic.Media.FuelAirMixture)                                                                                 annotation (
    Placement(visible = true, transformation(origin = {46, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  MVEMLib.Engines.Combustion.Parts.SIEfficiency ottoEfficiency(redeclare
      replaceable package externalMedium =
        Basic.Media.FuelAirMixture.burnedMedium,                                                                                                       redeclare
      replaceable package flowMedium =
        Basic.Media.FuelAirMixture.burnedMedium,
    Vd=0.0007,
    nCyl=3,
    B=0.05)                                                                                                                                                                                                         annotation (
    Placement(visible = true, transformation(origin = {22, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Blocks.Math.Gain gain(k = 1) annotation (
    Placement(transformation(extent = {{-10, -10}, {10, 10}}, rotation = 90, origin = {-22, 84})));
  Modelica.Mechanics.Rotational.Sensors.SpeedSensor speedSensor annotation (
    Placement(transformation(extent = {{10, 20}, {30, 40}}, rotation = 0)));
  Engines.Combustion.Parts.ButterflyThrottle throttle(redeclare replaceable
      package Medium =
        fuelAirMedium.airMedium, redeclare replaceable
      MVEMLib.Engines.Combustion.Parts.ThrottleServo throttleServo(Amin=
          0.150e-6, Amax=1000e-6))                                                                                                                                                                                           annotation (
    Placement(transformation(extent = {{-46, 44}, {-26, 64}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thermalConductor(G = 45 * 1.88) annotation (
    Placement(visible = true, transformation(origin = {138, -120}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain2(k = 0.1) annotation (
    Placement(visible = true, transformation(origin = {80, -104}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T Exhaust(redeclare package Medium =
        Basic.Media.FuelAirMixture.burnedMedium,                                                                                  use_T_in = true, use_X_in = false, use_m_flow_in = true,
    nPorts=1)                                                                                                                                                                              annotation (
    Placement(visible = true, transformation(origin = {-38, -98}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Fluid.Sources.Boundary_pT Ambient(redeclare package Medium =
        Basic.Media.FuelAirMixture.burnedMedium,
    p=101500,
    T=304.55,
    nPorts=1)                                                                                                                                     annotation (
    Placement(visible = true, transformation(origin = {-164, -42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T Tank_cold(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    m_flow=2,
    T=291.15,
    nPorts=1) annotation (Placement(visible=true, transformation(
        origin={-168,-72},
        extent={{-10,-10},{10,10}},
        rotation=0)));

  Modelica.Fluid.Sources.Boundary_pT Outlet(redeclare package Medium =
        Modelica.Media.Water.ConstantPropertyLiquidWater,
    T=328,
    p=100000,
    nPorts=1)                                                                                                                                             annotation (
    Placement(visible = true, transformation(origin={-70,-50},    extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Thermal.HeatTransfer.Components.ConvectiveResistor convectiveResistor annotation (
    Placement(visible = true, transformation(origin = {172, -122}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Hc(k = 1 / (1.88 * 500))  annotation (
    Placement(visible = true, transformation(origin = {171, -80}, extent = {{-11, -10}, {11, 10}}, rotation = -90)));
  Modelica.Blocks.Math.Gain gain1(k = 0.9) annotation (
    Placement(visible = true, transformation(origin = {60, -138}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Basic.Sensors.MassFlowSensor massFlow1(redeclare replaceable package Medium =
        Basic.Media.FuelAirMixture.burnedMedium)                                                                         annotation (
    Placement(transformation(extent = {{-68, -150}, {-48, -130}}, rotation = 0)));
  MVEMLib.Basic.Sensors.TemperatureSensor temperatureSensor(redeclare package
      Medium =
        Basic.Media.FuelAirMixture.burnedMedium)                                                                                annotation (
    Placement(visible = true, transformation(origin = {2, -150}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow prescribedHeatFlow(T_ref = 293.15, alpha = 0) annotation (
    Placement(transformation(extent = {{102, -162}, {122, -142}})));
  Modelica.Fluid.Pipes.DynamicPipe EngineWall(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,                                              redeclare
      model HeatTransfer =
        Modelica.Fluid.Pipes.BaseClasses.HeatTransfer.IdealFlowHeatTransfer,                                                                                                                                                      redeclare
      model FlowModel =
        Modelica.Fluid.Pipes.BaseClasses.FlowModels.DetailedPipeFlow,
    T_start=Modelica.SIunits.Conversions.from_degC(80),                                                                                                                                                                                                        diameter = 0.01, length = 0.5, modelStructure = Modelica.Fluid.Types.ModelStructure.a_v_b, nNodes = 1, nParallel = 20,
    p_a_start=130000,                                                                                                                                                                                                        use_HeatTransfer = true,
    use_T_start=true)                                                                                                                                                                                                         annotation (
    Placement(visible = true, transformation(origin={204,-124},    extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Fluid.Sources.MassFlowSource_T Inlet1(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    T=353.15,                                                                                                                             m_flow = 2, nPorts = 1) annotation (
    Placement(visible = true, transformation(origin={204,-184},    extent = {{-10, -10}, {10, 10}}, rotation = 90)));

  Modelica.Fluid.Sources.Boundary_pT Outlet1(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    T=370,
    p=100000,
    nPorts=1)                                                                                                                                                 annotation (
    Placement(visible = true, transformation(origin={264,-88},    extent = {{-10, -10}, {10, 10}}, rotation = 180)));

  replaceable package Medium = Modelica.Media.Interfaces.PartialMedium annotation (
    __Dymola_choicesAllMatching = true);
  MVEMLib.Basic.Sources.ConstantGasReference ambiantAir1(redeclare replaceable
      package Medium =
        Basic.Media.FuelAirMixture.burnedMedium)                                                                                         annotation (
    Placement(visible = true, transformation(origin = {118, -52}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Fluid.Examples.HeatExchanger.BaseClasses.BasicHX Exhaust_HE(
    length=20,
    nNodes=20,
    modelStructure_1=Modelica.Fluid.Types.ModelStructure.av_vb,
    modelStructure_2=Modelica.Fluid.Types.ModelStructure.av_vb,
    redeclare package Medium_1 =
        Modelica.Media.Water.ConstantPropertyLiquidWater,
    redeclare package Medium_2 = Basic.Media.FuelAirMixture.burnedMedium,
    crossArea_1=4.5e-4,
    crossArea_2=4.5e-4,
    perimeter_1=0.075,
    perimeter_2=0.075,
    area_h_1=0.075*20,
    area_h_2=0.075*20,
    s_wall=0.005,
    k_wall=50.2,
    c_wall=490,
    rho_wall=900,
    Twall_start=298.15,
    dT=10)
    annotation (Placement(transformation(extent={{-122,-80},{-102,-60}})));
  inner Modelica.Fluid.System system(T_ambient=298.15)
    annotation (Placement(transformation(extent={{-94,70},{-74,90}})));
  Modelica.Fluid.Sources.MassFlowSource_T Inlet2(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    m_flow=2,
    T=327.99,
    nPorts=1)                                                                                                                                                    annotation (
    Placement(visible = true, transformation(origin={172,-12},     extent = {{-10, -10}, {10, 10}}, rotation=0)));

  Modelica.Fluid.Sources.Boundary_pT Tank_hot(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    T=328,
    p=100000,
    nPorts=1) annotation (Placement(visible=true, transformation(
        origin={270,10},
        extent={{-10,-10},{10,10}},
        rotation=180)));

  Modelica.Fluid.Examples.HeatExchanger.BaseClasses.BasicHX Outlet_HE(
    length=20,
    nNodes=20,
    modelStructure_1=Modelica.Fluid.Types.ModelStructure.av_vb,
    modelStructure_2=Modelica.Fluid.Types.ModelStructure.av_vb,
    redeclare package Medium_1 =
        Modelica.Media.Water.ConstantPropertyLiquidWater,
    redeclare package Medium_2 =
        Modelica.Media.Water.ConstantPropertyLiquidWater,
    crossArea_1=4.5e-4,
    crossArea_2=4.5e-4,
    perimeter_1=0.075,
    perimeter_2=0.075,
    area_h_1=0.075*20,
    area_h_2=0.075*20,
    s_wall=0.005,
    k_wall=50.2,
    c_wall=490,
    rho_wall=900,
    Twall_start=298.15,
    dT=10) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={228,-10})));
  Modelica.Fluid.Sources.MassFlowSource_T EngineHot(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    use_m_flow_in=true,
    use_T_in=true,
    nPorts=1) annotation (Placement(visible=true, transformation(
        origin={278,-32},
        extent={{-10,-10},{10,10}},
        rotation=90)));

  Modelica.Fluid.Sources.Boundary_pT EngineCold(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    use_p_in=false,
    T=353.15,
    p=100000,
    nPorts=1) annotation (Placement(visible=true, transformation(
        origin={200,46},
        extent={{-10,-10},{10,10}},
        rotation=270)));

  Modelica.Fluid.Sensors.MassFlowRate massFlowRate(redeclare package Medium =
        Modelica.Media.Water.ConstantPropertyLiquidWater) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={226,-88})));
  Modelica.Fluid.Sensors.Temperature temperature(redeclare package Medium =
        Modelica.Media.Water.ConstantPropertyLiquidWater)
    annotation (Placement(transformation(extent={{194,-68},{214,-48}})));
equation
// Debug  burned fractions calculation
//(burnedGasComposition,dummyOutput)=fuelAirMedium.calcBurnedFractions(exhaustManifold.InPut.dmXi,2000);
  connect(intakeManifold.OutPut, engineFlow.InPut) annotation (
    Line(points = {{34, 54}, {70, 54}, {70, 40}}, color = {0, 0, 0}));
  connect(massFlow.OutPut, intakeManifold.InPut) annotation (
    Line(points = {{5.55112e-16, 54}, {5.55112e-16, 54}, {14, 54}}, color = {0, 0, 0}));
  connect(const.y, fuelDemand.u2) annotation (
    Line(points = {{-36.9, 90}, {-12, 90}, {-12, 84}, {-2, 84}}, color = {0, 0, 127}));
  connect(fuel.OutPut, forcedMassFlow.InPut) annotation (
    Line(points = {{90, 80}, {90, 72}}, color = {0, 0, 0}));
  connect(forcedMassFlow.dm, fuelDemand.y) annotation (
    Line(points = {{80.2, 62}, {76, 62}, {76, 90}, {21, 90}}, color = {0, 0, 127}));
  connect(forcedMassFlow.OutPut, fuelAirMixer.FuelInPut) annotation (
    Line(points = {{90, 52}, {90, 8}, {86, 8}, {86, -19.8}}, color = {0, 0, 0}));
  connect(engineFlow.OutPut, fuelAirMixer.AirInPut) annotation (
    Line(points = {{70, 20}, {70, 8}, {74, 8}, {74, -20}}, color = {0, 0, 0}));
  connect(adiabaticBurner.UnburnedInPut, fuelAirMixer.MixOutPut) annotation (
    Line(points = {{56, -70}, {80, -70}, {80, -40.2}}));
  connect(ottoEfficiency.InPut, adiabaticBurner.BurnedOutPut) annotation (
    Line(points = {{32, -68}, {34, -68}, {34, -70}, {36, -70}}));
  connect(massFlow.dm, gain.u) annotation (
    Line(points = {{-10, 64}, {-10, 68}, {-22, 68}, {-22, 72}}, color = {0, 0, 127}, smooth = Smooth.None));
  connect(gain.y, fuelDemand.u1) annotation (
    Line(points = {{-22, 95}, {-12, 95}, {-12, 96}, {-2, 96}}, color = {0, 0, 127}, smooth = Smooth.None));
  connect(speedSensor.w, engineFlow.wEng) annotation (
    Line(points = {{31, 30}, {61, 30}}, color = {0, 0, 127}, smooth = Smooth.None));
  connect(throttle.OutPut, massFlow.InPut) annotation (
    Line(points = {{-26, 54}, {-20, 54}}, color = {0, 0, 0}, smooth = Smooth.None));
  connect(ottoEfficiency.wEng, speedSensor.w) annotation (
    Line(points = {{16, -79}, {16, -94}, {64, -94}, {64, 12}, {31, 12}, {31, 30}}, color = {0, 0, 127}));
  connect(throttle.ThrottleRef, TqRef) annotation (
    Line(points = {{-46.2, 61}, {-50, 61}, {-50, 16}, {-104, 16}, {-104, 5.55112e-16}}, color = {0, 0, 127}, smooth = Smooth.None));
  connect(ottoEfficiency.Tq, engineTorque.tau) annotation (
    Line(points = {{22, -57}, {22, -30}, {-34, -30}, {-34, 6.66134e-16}, {-26, 6.66134e-16}}, color = {0, 0, 127}));
  connect(speedSensor.flange, engineInertia.flange_a) annotation (
    Line(points = {{10, 30}, {0, 30}, {0, 6.10623e-16}, {-5.55112e-16, 6.10623e-16}}, color = {0, 0, 0}, smooth = Smooth.None));
  connect(ambiantAir.OutPut, throttle.InPut) annotation (
    Line(points = {{-170, 54}, {-46, 54}}));
  connect(thermalConductor.port_b, convectiveResistor.solid) annotation (
    Line(points = {{148, -120}, {156, -120}, {156, -122}, {162, -122}}, color = {191, 0, 0}));
  connect(Hc.y, convectiveResistor.Rc) annotation (
    Line(points={{171,-92.1},{171,-101},{172,-101},{172,-112}},        color = {0, 0, 127}));
  connect(adiabaticBurner.dh, gain2.u) annotation (
    Line(points = {{46, -81}, {46, -104}, {68, -104}}, color = {0, 0, 127}));
  connect(adiabaticBurner.dh, gain1.u) annotation (
    Line(points = {{46, -81}, {46, -116}, {72, -116}, {72, -138}}, color = {0, 0, 127}));
  connect(gain1.y, ottoEfficiency.dh) annotation (
    Line(points = {{49, -138}, {22, -138}, {22, -79}}, color = {0, 0, 127}));
  connect(ExhaustGasSource.OutPut, massFlow1.InPut) annotation (
    Line(points = {{-82, -138}, {-72, -138}, {-72, -140}, {-68, -140}}, color = {0, 0, 0}));
  connect(massFlow1.OutPut, ottoEfficiency.OutPut) annotation (
    Line(points = {{-48, -140}, {-40, -140}, {-40, -138}, {-24, -138}, {-24, -96}, {-6, -96}, {-6, -68}, {12, -68}}, color = {0, 0, 0}));
  connect(massFlow1.dm, Exhaust.m_flow_in) annotation (
    Line(points = {{-58, -130}, {-46, -130}, {-46, -108}}, color = {0, 0, 127}));
  connect(temperatureSensor.T, Exhaust.T_in) annotation (
    Line(points = {{2, -160}, {-42, -160}, {-42, -110}}, color = {0, 0, 127}));
  connect(temperatureSensor.InPut, ottoEfficiency.OutPut) annotation (
    Line(points = {{12, -150}, {12, -68}}));
  connect(gain2.y, prescribedHeatFlow.Q_flow) annotation (
    Line(points = {{91, -104}, {96, -104}, {96, -152}, {102, -152}}, color = {0, 0, 127}));
  connect(prescribedHeatFlow.port, thermalConductor.port_a) annotation (
    Line(points = {{122, -152}, {128, -152}, {128, -120}}, color = {191, 0, 0}));
  connect(convectiveResistor.fluid, EngineWall.heatPorts[1]) annotation (
    Line(points={{182,-122},{194,-122},{194,-123.9},{199.6,-123.9}},    color = {191, 0, 0}));
  connect(Inlet1.ports[1], EngineWall.port_a) annotation (
    Line(points={{204,-174},{204,-134}},      color = {0, 127, 255}));
  connect(ambiantAir1.OutPut, ottoEfficiency.ExternalSource) annotation (
    Line(points = {{108, -52}, {52, -52}, {52, -78}, {28, -78}}));
  connect(Tank_cold.ports[1], Exhaust_HE.port_a1) annotation (Line(points={{
          -158,-72},{-142,-72},{-142,-70.2},{-123,-70.2}}, color={0,127,255}));
  connect(Exhaust_HE.port_b1, Outlet.ports[1]) annotation (Line(points={{-101,
          -70.2},{-90.5,-70.2},{-90.5,-50},{-80,-50}}, color={0,127,255}));
  connect(Exhaust.ports[1], Exhaust_HE.port_a2) annotation (Line(points={{-38,-88},
          {-70,-88},{-70,-74.6},{-101,-74.6}},      color={0,127,255}));
  connect(Exhaust_HE.port_b2, Ambient.ports[1]) annotation (Line(points={{-123,
          -65.4},{-138.5,-65.4},{-138.5,-42},{-154,-42}}, color={0,127,255}));
  connect(Inlet2.ports[1], Outlet_HE.port_a1) annotation (Line(points={{182,-12},
          {198,-12},{198,-10.2},{217,-10.2}}, color={0,127,255}));
  connect(Outlet_HE.port_b1, Tank_hot.ports[1]) annotation (Line(points={{239,
          -10.2},{249.5,-10.2},{249.5,10},{260,10}}, color={0,127,255}));
  connect(Outlet_HE.port_b2, EngineCold.ports[1]) annotation (Line(points={{217,
          -5.4},{199.5,-5.4},{199.5,36},{200,36}}, color={0,127,255}));
  connect(Outlet_HE.port_a2, EngineHot.ports[1]) annotation (Line(points={{239,
          -14.6},{257.5,-14.6},{257.5,-22},{278,-22}}, color={0,127,255}));
  connect(EngineWall.port_b, massFlowRate.port_a) annotation (Line(points={{204,
          -114},{204,-88},{216,-88}}, color={0,127,255}));
  connect(massFlowRate.port_b, Outlet1.ports[1])
    annotation (Line(points={{236,-88},{254,-88}}, color={0,127,255}));
  connect(massFlowRate.m_flow, EngineHot.m_flow_in) annotation (Line(points={{
          226,-77},{248,-77},{248,-68},{270,-68},{270,-42}}, color={0,0,127}));
  connect(temperature.port, EngineWall.port_b)
    annotation (Line(points={{204,-68},{204,-114}}, color={0,127,255}));
  connect(temperature.T, EngineHot.T_in)
    annotation (Line(points={{211,-58},{274,-58},{274,-44}}, color={0,0,127}));
  annotation (
    extent = [60, -70; 80, -50],
    rotation = 180,
    experiment(StopTime = 6, Interval = 0.001, Tolerance = 1e-05),
    experimentSetupOutput,
    Placement(transformation(origin={70,-60},    extent={{-10,-10},{10,10}},      rotation=180)),
    Diagram(coordinateSystem(initialScale = 0.1)),
    Icon(graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-96,74},{94,28}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid,
          textStyle={TextStyle.Bold,TextStyle.Italic},
          textString="Engine with 
heat exchangers
"),     Bitmap(extent={{-66,-96},{16,84}}, fileName=
              "modelica://MVEMLib/../../../22dfd62a7e2b161d2312b4c5237b97e9.png"),
        Bitmap(
          extent={{-34,-36},{34,36}},
          fileName=
              "modelica://MVEMLib/../../../shell-and-tube-heat-exchanger.png",
          origin={34,-54},
          rotation=90),
        Bitmap(extent={{14,-28},{82,16}}, fileName=
              "modelica://MVEMLib/../../../curved-arrow-icon-1.jpg"),
        Bitmap(
          extent={{-15,-16},{15,16}},
          fileName="modelica://MVEMLib/../../../curved-arrow-icon-1.jpg",
          origin={-15,-66},
          rotation=180)}));
end SIEngine;
