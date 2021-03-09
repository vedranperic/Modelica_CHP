within MVEMLib.Basic.Restrictions.Partial;
partial model NaturalFlowRestriction
  "Partial model for restrictions for which the flow always is from high pressure to low pressure"
  extends MVEMLib.Basic.Restrictions.Partial.IdealRestriction;
equation
  // For a natural restriction flow is always from high pressure to low pressure
  gas.T  = if InPut.p > OutPut.p then InPut.T else  OutPut.T;
  gas.p  = if InPut.p > OutPut.p then InPut.p else  OutPut.p;
  gas.Xi = if InPut.p > OutPut.p then InPut.Xi else OutPut.Xi;
  annotation (Icon(graphics={
        Line(points={{-80,66},{80,66},{66,76}}, color={0,0,255}),
        Line(points={{80,66},{68,54}}, color={0,0,255}),
        Line(points={{-68,78},{-80,66}}, color={0,0,255}),
        Line(points={{-80,66},{-68,54}}, color={0,0,255})}));
end NaturalFlowRestriction;
