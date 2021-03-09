within MVEMLib.Basic.Restrictions.Partial;
partial model ThreePortWithExternalSource
  "Model for simple heat exchanging devices with InPut and OutPut + knowledge of temperature and/or pressure "
  replaceable package externalMedium =  Modelica.Media.Interfaces.PartialMedium
                                                                                annotation (
      choicesAllMatching=true);
  replaceable package flowMedium =  Modelica.Media.Interfaces.PartialMedium annotation (
      choicesAllMatching=true);

  Interfaces.GasPort InPut(redeclare replaceable package Medium = flowMedium) annotation (Placement(transformation(extent={{-110,-10},{-90,10}},rotation=0)));
  Interfaces.GasPort OutPut(redeclare replaceable package Medium = flowMedium) annotation (Placement(transformation(extent={{90,-10},{110,10}}, rotation=0)));
  Interfaces.GasPort ExternalSource(redeclare replaceable package Medium =
        externalMedium)                                                                    annotation ( Placement(transformation(extent={{-70,90},{-50,110}})));

end ThreePortWithExternalSource;
