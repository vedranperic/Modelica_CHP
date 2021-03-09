within MVEMLib.Basic.Sensors;
model MassFlowSensor
  "Ideal sensor to measure the air flow trough a gasFlowConnector"
  extends Modelica.Icons.RotationalSensor;
  extends Basic.Restrictions.Partial.TwoPort;
  // Define medium properties
  replaceable package Medium = Modelica.Media.Interfaces.PartialMedium
    annotation(choicesAllMatching=true);
  // Mass flow output
  Modelica.Blocks.Interfaces.RealOutput dm
    "Mass flow through measurement device"
    annotation (Placement(transformation(
        origin={0,100},
        extent={{-10,-10},{10,10}},
        rotation=90)));
equation
  connect(InPut,OutPut);
  dm = InPut.dm;
  annotation (Icon(coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}},
        grid={1,1}), graphics={
        Text(
          extent={{19,100},{69,60}},
          lineColor={0,0,0},
          textString=
               "dm"),
        Line(points={{-70,0},{-90,0}}, color={0,0,0}),
        Line(points={{0,92},{0,70}}, color={0,0,127}),
        Text(extent={{119,-100},{-120,-63}}, textString=
                                          "%name"),
        Line(points={{90,0},{70,0}}, color={0,0,0})}),
    Diagram(coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}},
        grid={1,1}), graphics={Line(points={{-70,0},{-96,0}}, color={0,0,0}),
          Line(points={{70,0},{100,0}})}),
    Window(
      x=0.12,
      y=0.08,
      width=0.6,
      height=0.6));
end MassFlowSensor;
