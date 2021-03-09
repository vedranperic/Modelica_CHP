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
      w(fixed=false, start=157),
      J=1.5,
      a(start=0)));
  replaceable package fuelAirMedium = Basic.Media.FuelAirMixture annotation (
    choicesAllMatching = true);
  Basic.Media.FuelAirMixer fuelAirMixer(redeclare replaceable package
      fuelAirMedium =
        fuelAirMedium)                                                                               annotation (
    Placement(transformation(origin={84,-38},    extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  Basic.Volumes.FixedVolume intakeManifold(redeclare replaceable package Medium =
        fuelAirMedium.airMedium,                                                                           VStart = 0.0018, pStart = 101300 * 0.90) annotation (
    Placement(transformation(extent={{16,74},{36,94}},      rotation = 0)));
  MVEMLib.Basic.Sources.ConstantGasReference ambiantAir(redeclare replaceable
      package Medium =
        fuelAirMedium.airMedium,                                                                                        T = 298, p = 101500) annotation (
    Placement(visible = true, transformation(extent={{-120,74},{-100,94}},      rotation = 0)));
  Basic.Sources.ConstantGasReference fuel(redeclare replaceable package Medium =
        fuelAirMedium.fuelMedium)                                                                          annotation (
    Placement(transformation(origin={92,120},   extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  MVEMLib.Engines.Combustion.Parts.SpeedDensityEngineFlow engineFlow(redeclare
      replaceable package Medium =
        fuelAirMedium.airMedium,
    Vd=0.0007,
    rc=13,                       nCyl=3)                                                                                             annotation (
    Placement(transformation(origin={72,60},    extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  Modelica.Blocks.Sources.Constant const(k = fuelAirMedium.AFs) annotation (
    Placement(transformation(extent={{-58,110},{-36,130}},     rotation = 0)));
  Basic.Sensors.MassFlowSensor massFlow(redeclare replaceable package Medium =
        fuelAirMedium.airMedium)                                                                        annotation (
    Placement(transformation(extent={{-18,74},{2,94}},      rotation = 0)));
  Modelica.Blocks.Math.Division fuelDemand annotation (
    Placement(transformation(extent={{2,110},{22,130}},     rotation = 0)));
  Basic.Sources.ForcedMassFlow forcedMassFlow(redeclare replaceable package
      Medium =
        fuelAirMedium.fuelMedium)                                                                              annotation (
    Placement(transformation(origin={92,92},    extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  MVEMLib.Basic.Sources.ConstantGasReference ExhaustGasSource(redeclare
      replaceable package Medium =
        Basic.Media.FuelAirMixture.burnedMedium, T=518.75)                                                                                                annotation (
    Placement(visible = true, transformation(extent={{-160,-150},{-140,-130}},     rotation = 0)));
  //Real burnedGasComposition[fuelAirMedium.burnedMedium.nXi];
  //Real dummyOutput;
  MVEMLib.Basic.Media.AdiabaticBurner adiabaticBurner(redeclare package
      fuelAirMedium =
        Basic.Media.FuelAirMixture)                                                                                 annotation (
    Placement(visible = true, transformation(origin={10,-126},   extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  MVEMLib.Engines.Combustion.Parts.SIEfficiency ottoEfficiency(redeclare
      replaceable package externalMedium =
        Basic.Media.FuelAirMixture.burnedMedium,                                                                                                       redeclare
      replaceable package flowMedium =
        Basic.Media.FuelAirMixture.burnedMedium,
    Vd=0.0007,
    nCyl=3,
    B=0.05)                                                                                                                                                                                                         annotation (
    Placement(visible = true, transformation(origin={-20,-128},  extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Blocks.Math.Gain gain(k = 1) annotation (
    Placement(transformation(extent = {{-10, -10}, {10, 10}}, rotation = 90, origin={-20,114})));
  Modelica.Mechanics.Rotational.Sensors.SpeedSensor speedSensor annotation (
    Placement(transformation(extent={{12,50},{32,70}},      rotation = 0)));
  Engines.Combustion.Parts.ButterflyThrottle throttle(redeclare replaceable
      package Medium =
        fuelAirMedium.airMedium, redeclare replaceable
      MVEMLib.Engines.Combustion.Parts.ThrottleServo throttleServo(Amin=150e-6,
        Amax=1000e-6))                                                                                                                                                                                                       annotation (
    Placement(transformation(extent={{-44,74},{-24,94}},      rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thermalConductor(G = 45 * 1.88) annotation (
    Placement(visible = true, transformation(origin={126,-176},    extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain2(k = 0.1) annotation (
    Placement(visible = true, transformation(origin={30,-184},    extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T Exhaust(redeclare package Medium =
        Basic.Media.FuelAirMixture.burnedMedium,                                                                                  use_T_in = true, use_X_in = false, use_m_flow_in = true,
    nPorts=1)                                                                                                                                                                              annotation (
    Placement(visible = true, transformation(origin={-84,-84},    extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Fluid.Sources.Boundary_pT Ambient(redeclare package Medium =
        Basic.Media.FuelAirMixture.burnedMedium,
    p=101500,
    T=304.55,
    nPorts=1)                                                                                                                                     annotation (
    Placement(visible = true, transformation(origin={-176,-40},    extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T Tank_cold(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    m_flow=2,
    T=291.15,
    nPorts=1) annotation (Placement(visible=true, transformation(
        origin={-176,-72},
        extent={{-10,-10},{10,10}},
        rotation=0)));

  Modelica.Fluid.Sources.Boundary_pT Outlet(redeclare package Medium =
        Modelica.Media.Water.ConstantPropertyLiquidWater,
    T=328,
    p=100000,
    nPorts=1)                                                                                                                                             annotation (
    Placement(visible = true, transformation(origin={-104,-42},   extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Thermal.HeatTransfer.Components.ConvectiveResistor convectiveResistor annotation (
    Placement(visible = true, transformation(origin={158,-190},    extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Hc(k = 1 / (1.88 * 500))  annotation (
    Placement(visible = true, transformation(origin={169,-152},   extent = {{-11, -10}, {11, 10}}, rotation = -90)));
  Modelica.Blocks.Math.Gain gain1(k = 0.9) annotation (
    Placement(visible = true, transformation(origin={-10,-170},   extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Basic.Sensors.MassFlowSensor massFlow1(redeclare replaceable package Medium =
        Basic.Media.FuelAirMixture.burnedMedium)                                                                         annotation (
    Placement(transformation(extent={{-86,-192},{-66,-172}},      rotation = 0)));
  MVEMLib.Basic.Sensors.TemperatureSensor temperatureSensor(redeclare package
      Medium =
        Basic.Media.FuelAirMixture.burnedMedium)                                                                                annotation (
    Placement(visible = true, transformation(origin={-66,-134},  extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow prescribedHeatFlow(T_ref = 293.15, alpha = 0) annotation (
    Placement(transformation(extent={{92,-220},{112,-200}})));
  Modelica.Fluid.Pipes.DynamicPipe EngineWall(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,                                              redeclare
      model HeatTransfer =
        Modelica.Fluid.Pipes.BaseClasses.HeatTransfer.IdealFlowHeatTransfer,                                                                                                                                                      redeclare
      model FlowModel =
        Modelica.Fluid.Pipes.BaseClasses.FlowModels.DetailedPipeFlow,
    T_start=Modelica.SIunits.Conversions.from_degC(80),                                                                                                                                                                                                        diameter = 0.01, length = 0.5, modelStructure = Modelica.Fluid.Types.ModelStructure.a_v_b, nNodes = 1, nParallel = 20,
    p_a_start=130000,                                                                                                                                                                                                        use_HeatTransfer = true,
    use_T_start=true)                                                                                                                                                                                                         annotation (
    Placement(visible = true, transformation(origin={210,-200},    extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Fluid.Sources.MassFlowSource_T Inlet1(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    T=353.15,                                                                                                                             m_flow = 2, nPorts = 1) annotation (
    Placement(visible = true, transformation(origin={206,-242},    extent = {{-10, -10}, {10, 10}}, rotation = 90)));

  Modelica.Fluid.Sources.Boundary_pT Outlet1(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    T=370,
    p=100000,
    nPorts=1)                                                                                                                                                 annotation (
    Placement(visible = true, transformation(origin={266,-154},   extent = {{-10, -10}, {10, 10}}, rotation = 180)));

  replaceable package Medium = Modelica.Media.Interfaces.PartialMedium annotation (
    __Dymola_choicesAllMatching = true);
  MVEMLib.Basic.Sources.ConstantGasReference ambiantAir1(redeclare replaceable
      package Medium =
        Basic.Media.FuelAirMixture.burnedMedium)                                                                                         annotation (
    Placement(visible = true, transformation(origin={38,-140},    extent = {{-10, -10}, {10, 10}}, rotation = 180)));
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
    annotation (Placement(transformation(extent={{-146,-82},{-126,-62}})));
  inner Modelica.Fluid.System system(T_ambient=298.15)
    annotation (Placement(transformation(extent={{-92,100},{-72,120}})));
  Modelica.Fluid.Sources.MassFlowSource_T Inlet2(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    m_flow=2,
    T=327.99,
    nPorts=1)                                                                                                                                                    annotation (
    Placement(visible = true, transformation(origin={142,-122},    extent = {{-10, -10}, {10, 10}}, rotation=0)));

  Modelica.Fluid.Sources.Boundary_pT Tank_hot(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    T=328,
    p=100000,
    nPorts=1) annotation (Placement(visible=true, transformation(
        origin={238,-58},
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
        origin={196,-88})));
  Modelica.Fluid.Sources.MassFlowSource_T EngineHot(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    use_m_flow_in=true,
    use_T_in=true,
    nPorts=1) annotation (Placement(visible=true, transformation(
        origin={264,-90},
        extent={{-10,-10},{10,10}},
        rotation=90)));

  Modelica.Fluid.Sources.Boundary_pT EngineCold(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    use_p_in=false,
    T=353.15,
    p=100000,
    nPorts=1) annotation (Placement(visible=true, transformation(
        origin={132,-74},
        extent={{-10,-10},{10,10}},
        rotation=270)));

  Modelica.Fluid.Sensors.MassFlowRate massFlowRate(redeclare package Medium =
        Modelica.Media.Water.ConstantPropertyLiquidWater) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={228,-164})));
  Modelica.Fluid.Sensors.Temperature temperature(redeclare package Medium =
        Modelica.Media.Water.ConstantPropertyLiquidWater)
    annotation (Placement(transformation(extent={{190,-138},{210,-118}})));
  Basic.Sensors.MassFlowSensor massFlowMixture(redeclare replaceable package
      Medium = Basic.Media.FuelAirMixture.unburnedMedium) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={74,-128})));
  Modelica.Blocks.Math.Product MassMultiplier
    annotation (Placement(transformation(extent={{60,-204},{80,-184}})));
equation
// Debug  burned fractions calculation
//(burnedGasComposition,dummyOutput)=fuelAirMedium.calcBurnedFractions(exhaustManifold.InPut.dmXi,2000);
  connect(intakeManifold.OutPut, engineFlow.InPut) annotation (
    Line(points={{36,84},{72,84},{72,70}},        color = {0, 0, 0}));
  connect(massFlow.OutPut, intakeManifold.InPut) annotation (
    Line(points={{2,84},{16,84}},                                   color = {0, 0, 0}));
  connect(const.y, fuelDemand.u2) annotation (
    Line(points={{-34.9,120},{-10,120},{-10,114},{0,114}},       color = {0, 0, 127}));
  connect(fuel.OutPut, forcedMassFlow.InPut) annotation (
    Line(points={{92,110},{92,102}},    color = {0, 0, 0}));
  connect(forcedMassFlow.dm, fuelDemand.y) annotation (
    Line(points={{82.2,92},{78,92},{78,120},{23,120}},        color = {0, 0, 127}));
  connect(forcedMassFlow.OutPut, fuelAirMixer.FuelInPut) annotation (
    Line(points={{92,82},{92,-27.8},{90,-27.8}},             color = {0, 0, 0}));
  connect(engineFlow.OutPut, fuelAirMixer.AirInPut) annotation (
    Line(points={{72,50},{72,38},{78,38},{78,-28}},        color = {0, 0, 0}));
  connect(ottoEfficiency.InPut, adiabaticBurner.BurnedOutPut) annotation (
    Line(points={{-10,-128},{-6,-128},{-6,-126},{0,-126}}));
  connect(massFlow.dm, gain.u) annotation (
    Line(points={{-8,94},{-8,98},{-20,98},{-20,102}},           color = {0, 0, 127}, smooth = Smooth.None));
  connect(gain.y, fuelDemand.u1) annotation (
    Line(points={{-20,125},{-10,125},{-10,126},{0,126}},       color = {0, 0, 127}, smooth = Smooth.None));
  connect(speedSensor.w, engineFlow.wEng) annotation (
    Line(points={{33,60},{63,60}},      color = {0, 0, 127}, smooth = Smooth.None));
  connect(throttle.OutPut, massFlow.InPut) annotation (
    Line(points={{-24,84},{-18,84}},      color = {0, 0, 0}, smooth = Smooth.None));
  connect(ottoEfficiency.wEng, speedSensor.w) annotation (
    Line(points={{-26,-139},{-26,-124},{56,-124},{56,-18},{33,-18},{33,60}},       color = {0, 0, 127}));
  connect(throttle.ThrottleRef, TqRef) annotation (
    Line(points={{-44.2,91},{-48,91},{-48,46},{-104,46},{-104,0}},                      color = {0, 0, 127}, smooth = Smooth.None));
  connect(ottoEfficiency.Tq, engineTorque.tau) annotation (
    Line(points={{-20,-117},{-20,-12},{-46,-12},{-46,0},{-26,0}},                             color = {0, 0, 127}));
  connect(speedSensor.flange, engineInertia.flange_a) annotation (
    Line(points={{12,60},{2,60},{2,0},{0,0}},                                         color = {0, 0, 0}, smooth = Smooth.None));
  connect(ambiantAir.OutPut, throttle.InPut) annotation (
    Line(points={{-100,84},{-44,84}}));
  connect(Hc.y, convectiveResistor.Rc) annotation (
    Line(points={{169,-164.1},{169,-177},{158,-177},{158,-180}},       color = {0, 0, 127}));
  connect(adiabaticBurner.dh, gain2.u) annotation (
    Line(points={{10,-137},{10,-184},{18,-184}},       color = {0, 0, 127}));
  connect(adiabaticBurner.dh, gain1.u) annotation (
    Line(points={{10,-137},{10,-170},{2,-170}},                    color = {0, 0, 127}));
  connect(gain1.y, ottoEfficiency.dh) annotation (
    Line(points={{-21,-170},{-20,-170},{-20,-139}},    color = {0, 0, 127}));
  connect(massFlow1.dm, Exhaust.m_flow_in) annotation (
    Line(points={{-76,-172},{-76,-94},{-92,-94}},          color = {0, 0, 127}));
  connect(temperatureSensor.T, Exhaust.T_in) annotation (
    Line(points={{-66,-144},{-88,-144},{-88,-96}},       color = {0, 0, 127}));
  connect(temperatureSensor.InPut, ottoEfficiency.OutPut) annotation (
    Line(points={{-56,-134},{-56,-142},{-30,-142},{-30,-128}}));
  connect(prescribedHeatFlow.port, thermalConductor.port_a) annotation (
    Line(points={{112,-210},{112,-176},{116,-176}},        color = {191, 0, 0}));
  connect(Inlet1.ports[1], EngineWall.port_a) annotation (
    Line(points={{206,-232},{206,-210},{210,-210}},
                                              color = {0, 127, 255}));
  connect(ambiantAir1.OutPut, ottoEfficiency.ExternalSource) annotation (
    Line(points={{28,-140},{6,-140},{6,-138},{-14,-138}}));
  connect(Tank_cold.ports[1], Exhaust_HE.port_a1) annotation (Line(points={{-166,
          -72},{-166,-72.2},{-147,-72.2}},                 color={0,127,255}));
  connect(Exhaust_HE.port_b1, Outlet.ports[1]) annotation (Line(points={{-125,
          -72.2},{-114.5,-72.2},{-114.5,-42},{-114,-42}},
                                                       color={0,127,255}));
  connect(Exhaust.ports[1], Exhaust_HE.port_a2) annotation (Line(points={{-84,-74},
          {-94,-74},{-94,-76.6},{-125,-76.6}},      color={0,127,255}));
  connect(Exhaust_HE.port_b2, Ambient.ports[1]) annotation (Line(points={{-147,
          -67.4},{-162.5,-67.4},{-162.5,-40},{-166,-40}}, color={0,127,255}));
  connect(Inlet2.ports[1], Outlet_HE.port_a1) annotation (Line(points={{152,
          -122},{166,-122},{166,-88.2},{185,-88.2}},
                                              color={0,127,255}));
  connect(Outlet_HE.port_b1, Tank_hot.ports[1]) annotation (Line(points={{207,
          -88.2},{217.5,-88.2},{217.5,-58},{228,-58}},
                                                     color={0,127,255}));
  connect(Outlet_HE.port_b2, EngineCold.ports[1]) annotation (Line(points={{185,
          -83.4},{167.5,-83.4},{167.5,-84},{132,-84}},
                                                   color={0,127,255}));
  connect(Outlet_HE.port_a2, EngineHot.ports[1]) annotation (Line(points={{207,
          -92.6},{225.5,-92.6},{225.5,-80},{264,-80}}, color={0,127,255}));
  connect(EngineWall.port_b, massFlowRate.port_a) annotation (Line(points={{210,
          -190},{210,-164},{218,-164}},
                                      color={0,127,255}));
  connect(massFlowRate.port_b, Outlet1.ports[1])
    annotation (Line(points={{238,-164},{248,-164},{248,-154},{256,-154}},
                                                   color={0,127,255}));
  connect(massFlowRate.m_flow, EngineHot.m_flow_in) annotation (Line(points={{228,
          -153},{228,-138},{256,-138},{256,-100}},           color={0,0,127}));
  connect(temperature.port, EngineWall.port_b)
    annotation (Line(points={{200,-138},{200,-170},{210,-170},{210,-190}},
                                                    color={0,127,255}));
  connect(temperature.T, EngineHot.T_in)
    annotation (Line(points={{207,-128},{260,-128},{260,-102}},
                                                             color={0,0,127}));
  connect(thermalConductor.port_b, convectiveResistor.solid) annotation (Line(
        points={{136,-176},{136,-190},{148,-190}}, color={191,0,0}));
  connect(adiabaticBurner.UnburnedInPut, massFlowMixture.OutPut) annotation (
      Line(points={{20,-126},{42,-126},{42,-128},{64,-128}}, color={0,0,0}));
  connect(fuelAirMixer.MixOutPut, massFlowMixture.InPut)
    annotation (Line(points={{84,-48.2},{84,-128}}, color={0,0,0}));
  connect(gain2.y, MassMultiplier.u2) annotation (Line(points={{41,-184},{48,
          -184},{48,-200},{58,-200}}, color={0,0,127}));
  connect(MassMultiplier.y, prescribedHeatFlow.Q_flow) annotation (Line(points=
          {{81,-194},{86,-194},{86,-210},{92,-210}}, color={0,0,127}));
  connect(massFlowMixture.dm, MassMultiplier.u1) annotation (Line(points={{74,
          -138},{74,-163},{58,-163},{58,-188}}, color={0,0,127}));
  connect(temperatureSensor.InPut, massFlow1.InPut) annotation (Line(points={{-56,
          -134},{-56,-182},{-86,-182}},     color={0,0,0}));
  connect(convectiveResistor.fluid, EngineWall.heatPorts[1]) annotation (Line(
        points={{168,-190},{188,-190},{188,-199.9},{205.6,-199.9}}, color={191,
          0,0}));
  connect(massFlow1.InPut, ExhaustGasSource.OutPut) annotation (Line(points={{
          -86,-182},{-118,-182},{-118,-140},{-140,-140}}, color={0,0,0}));
  annotation (
    extent = [60, -70; 80, -50],
    rotation = 180,
    experiment(StopTime = 6, Interval = 0.001, Tolerance = 1e-05),
    experimentSetupOutput,
    Placement(transformation(origin={70,-60},    extent={{-10,-10},{10,10}},      rotation=180)),
    Diagram(coordinateSystem(initialScale = 0.1)));
end SIEngine;
