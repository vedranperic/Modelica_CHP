within MVEMLib.Basic.Restrictions.Partial;
partial model TwoPort "Model for all Flow Components with InPut and OutPut "
  // Define medium properties
  replaceable package Medium =
      Modelica.Media.Interfaces.PartialMedium annotation(choicesAllMatching=true);
  // Define i/o Connections
  Interfaces.GasPort InPut(redeclare replaceable package Medium = Medium)
     annotation (Placement(transformation(extent={{-110,-10},{-90,10}},
          rotation=0)));
  Interfaces.GasPort OutPut(redeclare replaceable package Medium = Medium)
     annotation (Placement(transformation(extent={{90,-10},{110,10}}, rotation=
            0)));

end TwoPort;
