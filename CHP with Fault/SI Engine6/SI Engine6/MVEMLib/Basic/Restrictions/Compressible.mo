within MVEMLib.Basic.Restrictions;
model Compressible "Model for compressible restriction"
  extends MVEMLib.Basic.Restrictions.Partial.NaturalFlowRestriction;
  parameter Real linearizationLim = 0.97
    "Limit for when a linear approximation is used to avoid making the system stiff. Set to 1 to disable";
  // Define extra i/o Connections
  Modelica.Blocks.Interfaces.RealInput Aeff                                              annotation (Placement(
        transformation(extent={{-108,30},{-88,50}}, rotation=0)));
  // Intermediate calculation variables
protected
  Real PI;
  Real PIcrit;
  Real PIeff;
  Real gamma;
  Real rhoCorr;
  Real Psi;
  Real flowDir;
  Real PIlin;
equation
  // Alarm if Aeff is ever lower than zero
  assert(Aeff >= 0,"Effective area input is lower than zero (" + String(Aeff) +") which is not allowed. Check your area function");
  // Rename linearizationLim parameter to PIlin
  PIlin = linearizationLim;
  // Calculate some necessary properties
  gamma = Medium.isentropicExponent(gas.state);
  // Calculate flow direction and magnitude
  //PI - 1 = if InPut.p - OutPut.p  > 0 then -(InPut.p-OutPut.p)/InPut.p else (InPut.p - OutPut.p) / OutPut.p ;
  PI = 1 + semiLinear(InPut.p - OutPut.p,  -1/InPut.p,  1/OutPut.p);
  rhoCorr = (Aeff * gas.p) / sqrt(gas.R * gas.T);
  // PI for which we reach speed of sound (lower limit of PI)
  PIcrit = (2 / (gamma + 1)) ^ (gamma / (gamma - 1));
  PIeff = max(PI, PIcrit);
  // Calculate flow function, use linearization for PIeff > linearizationLim
  // Sanity Check: For PIlin = PIeff and PIeff = 1 the expressions should be the same
  Psi = if  PIeff <= linearizationLim then
            PIeff ^ (1 / gamma)*sqrt((2 * gamma) / (gamma - 1) * (1 - PIeff ^ ((gamma - 1) / gamma))) else
            PIlin ^ (1 / gamma)*sqrt((2 * gamma) / (gamma - 1) * (1 - PIlin ^ ((gamma - 1) / gamma)))/(PIlin-1)*(PIeff-1);
  flowDir = sign(InPut.p - OutPut.p);
  //flowDir  = sign(InPut.p/OutPut.p - 1);
  InPut.dm = Psi * rhoCorr * flowDir;
  annotation (Icon(graphics={Text(
          extent={{-2,-82},{-2,-100}},
          lineColor={0,0,255},
          fillColor={0,115,0},
          fillPattern=FillPattern.Solid,
          textString=
               "Compressible")}));
end Compressible;
