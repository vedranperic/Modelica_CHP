within MVEMLib.Engines.Combustion.Parts;
model ButterflyThrottle
  "Butterfly throttle based on compressible restriction with simple servo. The servo is made replaceable to be able to model more advanced servos"
  extends Basic.Restrictions.Partial.TwoPort;

  replaceable Partial.PartialThrottleServo throttleServo annotation (choicesAllMatching=true,
      Placement(transformation(extent={{-40,0},{-20,20}}, rotation=0)));
  Basic.Restrictions.Compressible throttleRestriction(redeclare replaceable
      package Medium =                                                                       Medium)
    annotation (Placement(transformation(extent={{2,-4},{22,16}}, rotation=0)));
  Modelica.Blocks.Interfaces.RealInput ThrottleRef
    annotation (Placement(transformation(extent={{-112,60},{-92,80}}, rotation=
            0)));
equation
  connect(InPut, throttleRestriction.InPut) annotation (Line(points={{-100,
          5.55112e-16},{-64,5.55112e-16},{-64,-16},{-6,-16},{-6,6},{2,6}},
                                                   color={0,0,0}));
  connect(throttleRestriction.OutPut, OutPut) annotation (Line(points={{22,6},{
          34,6},{34,5.55112e-16},{100,5.55112e-16}},
                                color={0,0,0}));
  connect(ThrottleRef, throttleServo.throttlePosition) annotation (Line(points=
          {{-102,70},{-72,70},{-72,10},{-40,10}}, color={0,0,127}));
  connect(throttleRestriction.Aeff, throttleServo.throttleArea)
    annotation (Line(points={{2.2,10},{-8.9,10},{-20,10}},
                                                 color={0,0,127}));
  annotation (         Icon(graphics={
        Line(points={{-60,60},{60,-60}}, color={0,0,255}),
        Ellipse(
          extent={{-2,2},{2,-2}},
          lineColor={0,0,255},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid),
        Line(points={{-72,70},{80,70}}, color={0,0,255}),
        Line(points={{-70,-72},{82,-72}}, color={0,0,255}),
        Text(
          extent={{-98,60},{-64,36}},
          lineColor={0,0,255},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid,
          textString=
               "[-]"),
        Text(
          extent={{-100,100},{100,80}},
          lineColor={0,0,255},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid,
          textString=
               "%name"),
        Text(
          extent={{-100,-80},{100,-100}},
          lineColor={0,0,255},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid,
          textString=
               "ButterflyThrottle")}));
end ButterflyThrottle;
