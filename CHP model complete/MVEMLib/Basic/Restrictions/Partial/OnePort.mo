within MVEMLib.Basic.Restrictions.Partial;
partial model OnePort "Model for all Flow Components with only one port "
  // Define medium properties
  replaceable package Medium =
      Modelica.Media.Interfaces.PartialMedium annotation(choicesAllMatching=true);
  // Define i/o Connections
  Interfaces.GasPort InPut(redeclare replaceable package Medium = Medium)
     annotation (Placement(transformation(extent={{-110,-10},{-90,10}},
          rotation=0)));

end OnePort;
