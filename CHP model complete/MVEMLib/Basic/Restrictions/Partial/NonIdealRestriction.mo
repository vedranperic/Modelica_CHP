within MVEMLib.Basic.Restrictions.Partial;
partial model NonIdealRestriction "Partial model for all restrictions."
   extends MVEMLib.Basic.Restrictions.Partial.TwoPort;
   // Gas properties
  Medium.BaseProperties gas(T(start=300),p(start=1e5));
  // Properties of the restriction
equation
  // Replace with something valid for the subclassed restriction
  //  InPut.dmX = ... * flow_dir * X;
  // Calculate the flow variables
  InPut.dm   = -OutPut.dm;
  InPut.dmXi  = -OutPut.dmXi;

  InPut.dmXi = InPut.dm * gas.Xi;

  // The non ideal part comes from this equation
  //InPut.dH   = - OutPut.dH;

  // FIXME: Would be nice with a semilinear here
  InPut.dH = InPut.dm * gas.h;
  annotation (Icon(graphics={
        Line(points={{-80,50},{-20,50},{-20,20},{20,20}}, color={0,0,255}),
        Line(points={{-80,-50},{-20,-50},{-20,-20},{20,-20}}, color={0,0,255}),
        Line(points={{20,-20},{20,-34},{20,-50},{80,-50}}, color={0,0,255}),
        Line(points={{20,20},{20,34},{20,50},{80,50}}, color={0,0,255}),
        Text(
          extent={{-100,100},{100,80}},
          lineColor={0,0,255},
          fillColor={0,115,0},
          fillPattern=FillPattern.Solid,
          textString=
               "%name")}),
                    Diagram(graphics));
end NonIdealRestriction;
