within MVEMLib.Basic.Restrictions;
model Incompressible "Model of incompressible restrictions such as air filter"
  extends MVEMLib.Basic.Restrictions.Partial.NaturalFlowRestriction;
  parameter Real H =           1e7 "Flow resitance";
  parameter SI.Pressure pLin = 100 "Linearization limit";
  // Intermediate calculation variables
protected
  Real pDiff;
  Real flowDir;
equation
  pDiff = abs(InPut.p - OutPut.p);
  flowDir = sign(InPut.p - OutPut.p);
  InPut.dm = (if pLin > pDiff then  pDiff / sqrt(pLin) else sqrt(pDiff)) * sqrt(gas.p / H / gas.T) * flowDir;
  annotation (Icon(graphics={Text(
          extent={{-2,-80},{-2,-100}},
          lineColor={0,0,255},
          fillColor={0,115,0},
          fillPattern=FillPattern.Solid,
          textString=
               "Incompressible"), Text(
          extent={{-100,100},{100,80}},
          lineColor={0,0,255},
          fillColor={0,115,0},
          fillPattern=FillPattern.Solid,
          textString=
               "%name")}));
end Incompressible;
