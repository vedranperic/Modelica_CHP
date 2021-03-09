within MVEMLib.Engines.Combustion.Parts;
model ThrottleServo
  "Simple model of throttle plate area from throttle open fraction"
  extends Partial.PartialThrottleServo;
  parameter SI.Area Amax = 1000e-6 "Maximal throttle area";
  parameter SI.Area Amin = 15e-6 "Maximal throttle area";
  Modelica.Blocks.Math.Gain throttleAreaGain(k=(Amax - Amin))
    annotation (Placement(transformation(extent={{-30,30},{-10,50}}, rotation=0)));
  Modelica.Blocks.Math.Add throttleAreaSum annotation (Placement(transformation(
          extent={{6,10},{26,30}}, rotation=0)));
  Modelica.Blocks.Sources.Constant minArea(k=Amin)
    annotation (Placement(transformation(extent={{-32,-10},{-12,10}}, rotation=
            0)));
equation
  connect(throttleAreaGain.y, throttleAreaSum.u1) annotation (Line(points={{-9,40},
          {-4,40},{-4,26},{4,26}},     color={0,0,127}));
  connect(minArea.y, throttleAreaSum.u2) annotation (Line(points={{-11,
          6.10623e-16},{-4,6.10623e-16},{-4,14},{4,14}},
                           color={0,0,127}));
  connect(throttleAreaGain.u, throttlePosition) annotation (Line(points={{-32,40},
          {-62,40},{-62,1.11022e-15},{-100,1.11022e-15}},
                                          color={0,0,127}));
  connect(throttleArea, throttleAreaSum.y) annotation (Line(points={{100,0},{
          63.5,0},{63.5,20},{27,20}},
                color={0,0,127}));
end ThrottleServo;
