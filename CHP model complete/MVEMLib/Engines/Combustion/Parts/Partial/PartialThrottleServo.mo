within MVEMLib.Engines.Combustion.Parts.Partial;
partial model PartialThrottleServo
  "Partial model of throttle plate area from throttle open fraction"
  Modelica.Blocks.Interfaces.RealInput throttlePosition
                                        annotation (Placement(transformation(
          extent={{-120,-20},{-80,20}}, rotation=0)));
  Modelica.Blocks.Interfaces.RealOutput throttleArea
                        annotation (Placement(transformation(extent={{90,-10},{
            110,10}}, rotation=0)));
  annotation (Diagram(graphics),
                       Icon(graphics={
        Line(points={{-60,60},{60,-60}}, color={0,0,255}),
        Ellipse(
          extent={{-2,2},{2,-2}},
          lineColor={0,0,255},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid),
        Line(points={{-72,70},{80,70}}, color={0,0,255}),
        Line(points={{-70,-72},{82,-72}}, color={0,0,255}),
        Text(
          extent={{-94,38},{-60,14}},
          lineColor={0,0,255},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid,
          textString=
               "[-]"),
        Text(
          extent={{28,46},{98,12}},
          lineColor={0,0,255},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid,
          textString=
               "[m ]"),
        Text(
          extent={{64,48},{86,30}},
          lineColor={0,0,255},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid,
          textString=
               "2"),
        Text(
          extent={{-100,100},{100,80}},
          lineColor={0,0,255},
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid,
          textString=
               "%name")}));
end PartialThrottleServo;
