within MVEMLib.Basic.Interfaces;
connector GasPort
  replaceable package Medium =
      Modelica.Media.Interfaces.PartialMedium;
  // The connectors need to know the properties of the gas that is flowing, i.e.
  // pressure temperature and composisiton. This information can then be passed on
  // to the restrictions so that they can calculate the mass-flow correctly.
  SI.Pressure p "Pressure in the connector point";
  SI.Temperature T "Temperature in the connector point";
  SI.MassFraction Xi[Medium.nXi]
    "Mass fractions of respective independent gas component in the connector point";
  flow SI.EnthalpyFlowRate dH "Specific enthalpy flow through the connector";
  flow SI.MassFlowRate dm "Total Mass flow through the connector";
  flow SI.MassFlowRate dmXi[Medium.nXi]
    "Mass flow of respective independent component through the connector";
  annotation (Icon(graphics={Ellipse(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,0},
          fillColor={0,115,0},
          fillPattern=FillPattern.Solid)}));
end GasPort;
