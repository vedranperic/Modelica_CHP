#include <moutil.c>
PreNonAliasDef(6)
PreNonAliasDef(7)
PreNonAliasDef(8)
PreNonAliasDef(9)
PreNonAliasDef(10)
StartNonAlias(5)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[5].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[5].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[5].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 112, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[6].X[1]", 1, 1, 114, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[6].X[2]", 1, 1, 115, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[6].X[3]", 1, 1, 116, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[6].X[4]", 1, 1, 117, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[6].X[5]", 1, 1, 118, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[6].X[6]", 1, 1, 119, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[1])", 1,\
 6, 114, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[2])", 1,\
 6, 115, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[3])", 1,\
 6, 116, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[4])", 1,\
 6, 117, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[5])", 1,\
 6, 118, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[6])", 1,\
 6, 119, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(h)", "der(Specific enthalpy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(d)", "der(Density of medium) [Pa.m-2.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[6].T", "Temperature of medium [K|degC]",\
 113, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 114, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[6].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 115, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[6].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 116, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[6].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 117, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[6].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 118, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[6].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 119, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].der(R)", "der(Gas constant (of mixture if applicable)) [W/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[6].p", 1, 1, 112, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[6].T", 1, 1, 113, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[6].X[1]", 1, 1, 114, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[6].X[2]", 1, 1, 115, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[6].X[3]", 1, 1, 116, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[6].X[4]", 1, 1, 117, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[6].X[5]", 1, 1, 118, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[6].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[6].X[6]", 1, 1, 119, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[6].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 120, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[7].X[1]", 1, 1, 122, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[7].X[2]", 1, 1, 123, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[7].X[3]", 1, 1, 124, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[7].X[4]", 1, 1, 125, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[7].X[5]", 1, 1, 126, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[7].X[6]", 1, 1, 127, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[1])", 1,\
 6, 122, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[2])", 1,\
 6, 123, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[3])", 1,\
 6, 124, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[4])", 1,\
 6, 125, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[5])", 1,\
 6, 126, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[6])", 1,\
 6, 127, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(h)", "der(Specific enthalpy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(d)", "der(Density of medium) [Pa.m-2.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[7].T", "Temperature of medium [K|degC]",\
 121, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 122, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[7].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 123, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[7].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 124, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[7].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 125, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[7].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 126, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[7].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 127, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].der(R)", "der(Gas constant (of mixture if applicable)) [W/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[7].p", 1, 1, 120, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[7].T", 1, 1, 121, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[7].X[1]", 1, 1, 122, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[7].X[2]", 1, 1, 123, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[7].X[3]", 1, 1, 124, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[7].X[4]", 1, 1, 125, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[7].X[5]", 1, 1, 126, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[7].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[7].X[6]", 1, 1, 127, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[7].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 128, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[8].X[1]", 1, 1, 130, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[8].X[2]", 1, 1, 131, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[8].X[3]", 1, 1, 132, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[8].X[4]", 1, 1, 133, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[8].X[5]", 1, 1, 134, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[8].X[6]", 1, 1, 135, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[1])", 1,\
 6, 130, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[2])", 1,\
 6, 131, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[3])", 1,\
 6, 132, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[4])", 1,\
 6, 133, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[5])", 1,\
 6, 134, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[6])", 1,\
 6, 135, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(h)", "der(Specific enthalpy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(d)", "der(Density of medium) [Pa.m-2.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[8].T", "Temperature of medium [K|degC]",\
 129, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 130, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[8].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 131, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[8].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 132, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[8].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 133, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[8].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 134, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[8].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 135, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].der(R)", "der(Gas constant (of mixture if applicable)) [W/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[8].p", 1, 1, 128, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[8].T", 1, 1, 129, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[8].X[1]", 1, 1, 130, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[8].X[2]", 1, 1, 131, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[8].X[3]", 1, 1, 132, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[8].X[4]", 1, 1, 133, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[8].X[5]", 1, 1, 134, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[8].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[8].X[6]", 1, 1, 135, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[8].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 136, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[9].X[1]", 1, 1, 138, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[9].X[2]", 1, 1, 139, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[9].X[3]", 1, 1, 140, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[9].X[4]", 1, 1, 141, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[9].X[5]", 1, 1, 142, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[9].X[6]", 1, 1, 143, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[1])", 1,\
 6, 138, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[2])", 1,\
 6, 139, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[3])", 1,\
 6, 140, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[4])", 1,\
 6, 141, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[5])", 1,\
 6, 142, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[6])", 1,\
 6, 143, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(h)", "der(Specific enthalpy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(d)", "der(Density of medium) [Pa.m-2.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[9].T", "Temperature of medium [K|degC]",\
 137, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 138, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[9].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 139, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[9].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 140, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[9].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 141, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[9].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 142, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[9].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 143, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].der(R)", "der(Gas constant (of mixture if applicable)) [W/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[9].p", 1, 1, 136, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[9].T", 1, 1, 137, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[9].X[1]", 1, 1, 138, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[9].X[2]", 1, 1, 139, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[9].X[3]", 1, 1, 140, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[9].X[4]", 1, 1, 141, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[9].X[5]", 1, 1, 142, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[9].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[9].X[6]", 1, 1, 143, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[9].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 144, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[10].X[1]", 1, 1, 146, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[10].X[2]", 1, 1, 147, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[10].X[3]", 1, 1, 148, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[10].X[4]", 1, 1, 149, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[10].X[5]", 1, 1, 150, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[10].X[6]", 1, 1, 151, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[1])", 1,\
 6, 146, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[2])", 1,\
 6, 147, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[3])", 1,\
 6, 148, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[4])", 1,\
 6, 149, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[5])", 1,\
 6, 150, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[6])", 1,\
 6, 151, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[10].T", "Temperature of medium [K|degC]",\
 145, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[10].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 146, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[10].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 147, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[10].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 148, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[10].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 149, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[10].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 150, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[10].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 151, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[10].p", 1, 1, 144, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[10].T", 1, 1, 145, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[10].X[1]", 1, 1, 146, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[10].X[2]", 1, 1, 147, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[10].X[3]", 1, 1, 148, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[10].X[4]", 1, 1, 149, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[10].X[5]", 1, 1, 150, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[10].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[10].X[6]", 1, 1, 151, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[10].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[11].p", "Absolute pressure of medium [Pa|bar]",\
 152, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[11].X[1]", 1, 1, 154, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[11].X[2]", 1, 1, 155, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[11].X[3]", 1, 1, 156, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[11].X[4]", 1, 1, 157, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[11].X[5]", 1, 1, 158, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[11].X[6]", 1, 1, 159, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[1])", 1,\
 6, 154, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[2])", 1,\
 6, 155, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[3])", 1,\
 6, 156, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[4])", 1,\
 6, 157, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[5])", 1,\
 6, 158, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[6])", 1,\
 6, 159, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[11].T", "Temperature of medium [K|degC]",\
 153, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[11].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 154, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[11].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 155, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[11].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 156, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[11].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 157, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[11].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 158, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[11].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 159, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[11].p", 1, 1, 152, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[11].T", 1, 1, 153, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[11].X[1]", 1, 1, 154, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[11].X[2]", 1, 1, 155, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[11].X[3]", 1, 1, 156, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[11].X[4]", 1, 1, 157, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[11].X[5]", 1, 1, 158, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[11].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[11].X[6]", 1, 1, 159, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[11].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[12].p", "Absolute pressure of medium [Pa|bar]",\
 160, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[12].X[1]", 1, 1, 162, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[12].X[2]", 1, 1, 163, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[12].X[3]", 1, 1, 164, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[12].X[4]", 1, 1, 165, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[12].X[5]", 1, 1, 166, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[12].X[6]", 1, 1, 167, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[1])", 1,\
 6, 162, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[2])", 1,\
 6, 163, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[3])", 1,\
 6, 164, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[4])", 1,\
 6, 165, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[5])", 1,\
 6, 166, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[6])", 1,\
 6, 167, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[12].T", "Temperature of medium [K|degC]",\
 161, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[12].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 162, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[12].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 163, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[12].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 164, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[12].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 165, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[12].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 166, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[12].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 167, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[12].p", 1, 1, 160, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[12].T", 1, 1, 161, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[12].X[1]", 1, 1, 162, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[12].X[2]", 1, 1, 163, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[12].X[3]", 1, 1, 164, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[12].X[4]", 1, 1, 165, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[12].X[5]", 1, 1, 166, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[12].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[12].X[6]", 1, 1, 167, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[12].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[13].p", "Absolute pressure of medium [Pa|bar]",\
 168, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[13].X[1]", 1, 1, 170, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[13].X[2]", 1, 1, 171, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[13].X[3]", 1, 1, 172, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[13].X[4]", 1, 1, 173, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[13].X[5]", 1, 1, 174, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[13].X[6]", 1, 1, 175, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[1])", 1,\
 6, 170, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[2])", 1,\
 6, 171, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[3])", 1,\
 6, 172, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[4])", 1,\
 6, 173, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[5])", 1,\
 6, 174, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[6])", 1,\
 6, 175, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[13].T", "Temperature of medium [K|degC]",\
 169, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[13].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 170, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[13].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 171, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[13].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 172, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[13].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 173, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[13].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 174, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[13].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 175, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[13].p", 1, 1, 168, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[13].T", 1, 1, 169, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[13].X[1]", 1, 1, 170, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[13].X[2]", 1, 1, 171, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[13].X[3]", 1, 1, 172, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[13].X[4]", 1, 1, 173, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[13].X[5]", 1, 1, 174, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[13].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[13].X[6]", 1, 1, 175, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[13].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[14].p", "Absolute pressure of medium [Pa|bar]",\
 176, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[14].X[1]", 1, 1, 178, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[14].X[2]", 1, 1, 179, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[14].X[3]", 1, 1, 180, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[14].X[4]", 1, 1, 181, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[14].X[5]", 1, 1, 182, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[14].X[6]", 1, 1, 183, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[1])", 1,\
 6, 178, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[2])", 1,\
 6, 179, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[3])", 1,\
 6, 180, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[4])", 1,\
 6, 181, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[5])", 1,\
 6, 182, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[6])", 1,\
 6, 183, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[14].T", "Temperature of medium [K|degC]",\
 177, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[14].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 178, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[14].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 179, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[14].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 180, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[14].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 181, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[14].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 182, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[14].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 183, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[14].p", 1, 1, 176, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[14].T", 1, 1, 177, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[14].X[1]", 1, 1, 178, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[14].X[2]", 1, 1, 179, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[14].X[3]", 1, 1, 180, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[14].X[4]", 1, 1, 181, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[14].X[5]", 1, 1, 182, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[14].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[14].X[6]", 1, 1, 183, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[14].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[15].p", "Absolute pressure of medium [Pa|bar]",\
 184, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[15].X[1]", 1, 1, 186, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[15].X[2]", 1, 1, 187, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[15].X[3]", 1, 1, 188, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[15].X[4]", 1, 1, 189, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[15].X[5]", 1, 1, 190, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[15].X[6]", 1, 1, 191, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[1])", 1,\
 6, 186, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[2])", 1,\
 6, 187, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[3])", 1,\
 6, 188, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[4])", 1,\
 6, 189, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[5])", 1,\
 6, 190, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[6])", 1,\
 6, 191, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[15].T", "Temperature of medium [K|degC]",\
 185, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[15].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 186, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[15].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 187, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[15].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 188, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[15].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 189, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[15].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 190, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[15].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 191, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[15].p", 1, 1, 184, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[15].T", 1, 1, 185, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[15].X[1]", 1, 1, 186, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[15].X[2]", 1, 1, 187, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[15].X[3]", 1, 1, 188, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[15].X[4]", 1, 1, 189, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[15].X[5]", 1, 1, 190, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[15].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[15].X[6]", 1, 1, 191, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[15].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[16].p", "Absolute pressure of medium [Pa|bar]",\
 192, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[16].X[1]", 1, 1, 194, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[16].X[2]", 1, 1, 195, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[16].X[3]", 1, 1, 196, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[16].X[4]", 1, 1, 197, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[16].X[5]", 1, 1, 198, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[16].X[6]", 1, 1, 199, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[1])", 1,\
 6, 194, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[2])", 1,\
 6, 195, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[3])", 1,\
 6, 196, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[4])", 1,\
 6, 197, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[5])", 1,\
 6, 198, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[6])", 1,\
 6, 199, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[16].T", "Temperature of medium [K|degC]",\
 193, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[16].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 194, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[16].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 195, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[16].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 196, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[16].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 197, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[16].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 198, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[16].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 199, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[16].p", 1, 1, 192, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[16].T", 1, 1, 193, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[16].X[1]", 1, 1, 194, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[16].X[2]", 1, 1, 195, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[16].X[3]", 1, 1, 196, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[16].X[4]", 1, 1, 197, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[16].X[5]", 1, 1, 198, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[16].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[16].X[6]", 1, 1, 199, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[16].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[17].p", "Absolute pressure of medium [Pa|bar]",\
 200, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[17].X[1]", 1, 1, 202, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[17].X[2]", 1, 1, 203, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[17].X[3]", 1, 1, 204, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[17].X[4]", 1, 1, 205, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[17].X[5]", 1, 1, 206, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[17].X[6]", 1, 1, 207, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[1])", 1,\
 6, 202, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[2])", 1,\
 6, 203, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[3])", 1,\
 6, 204, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[4])", 1,\
 6, 205, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[5])", 1,\
 6, 206, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[6])", 1,\
 6, 207, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[17].T", "Temperature of medium [K|degC]",\
 201, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[17].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 202, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[17].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 203, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[17].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 204, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[17].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 205, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[17].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 206, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[17].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 207, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[17].p", 1, 1, 200, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[17].T", 1, 1, 201, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[17].X[1]", 1, 1, 202, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[17].X[2]", 1, 1, 203, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[17].X[3]", 1, 1, 204, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[17].X[4]", 1, 1, 205, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[17].X[5]", 1, 1, 206, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[17].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[17].X[6]", 1, 1, 207, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[17].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[18].p", "Absolute pressure of medium [Pa|bar]",\
 208, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[18].X[1]", 1, 1, 210, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[18].X[2]", 1, 1, 211, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[18].X[3]", 1, 1, 212, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[18].X[4]", 1, 1, 213, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[18].X[5]", 1, 1, 214, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[18].X[6]", 1, 1, 215, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[1])", 1,\
 6, 210, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[2])", 1,\
 6, 211, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[3])", 1,\
 6, 212, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[4])", 1,\
 6, 213, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[5])", 1,\
 6, 214, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[6])", 1,\
 6, 215, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[18].T", "Temperature of medium [K|degC]",\
 209, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[18].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 210, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[18].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 211, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[18].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 212, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[18].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 213, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[18].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 214, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[18].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 215, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[18].p", 1, 1, 208, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[18].T", 1, 1, 209, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[18].X[1]", 1, 1, 210, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[18].X[2]", 1, 1, 211, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[18].X[3]", 1, 1, 212, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[18].X[4]", 1, 1, 213, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[18].X[5]", 1, 1, 214, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[18].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[18].X[6]", 1, 1, 215, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[18].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[19].p", "Absolute pressure of medium [Pa|bar]",\
 216, 0.0, 0.0,100000000.0,100000.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(p)", \
"der(Absolute pressure of medium) [Pa/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[19].X[1]", 1, 1, 218, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[19].X[2]", 1, 1, 219, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[19].X[3]", 1, 1, 220, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[19].X[4]", 1, 1, 221, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[19].X[5]", 1, 1, 222, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[19].X[6]", 1, 1, 223, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[1])", 1,\
 6, 218, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[2])", 1,\
 6, 219, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[3])", 1,\
 6, 220, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[4])", 1,\
 6, 221, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[5])", 1,\
 6, 222, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[6])", 1,\
 6, 223, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(h)", \
"der(Specific enthalpy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[19].T", "Temperature of medium [K|degC]",\
 217, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[19].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 218, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[19].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 219, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[19].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 220, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[19].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 221, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[19].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 222, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[19].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 223, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[19].p", 1, 1, 216, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[19].T", 1, 1, 217, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[19].X[1]", 1, 1, 218, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[19].X[2]", 1, 1, 219, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[19].X[3]", 1, 1, 220, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[19].X[4]", 1, 1, 221, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[19].X[5]", 1, 1, 222, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[19].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[19].X[6]", 1, 1, 223, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[19].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,1E+100,100000.0,0,513)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].Xi[1]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[20].X[1]", 1, 1, 225, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].Xi[2]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[20].X[2]", 1, 1, 226, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].Xi[3]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[20].X[3]", 1, 1, 227, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].Xi[4]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[20].X[4]", 1, 1, 228, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].Xi[5]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[20].X[5]", 1, 1, 229, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].Xi[6]", "Structurally independent mass fractions [1]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[20].X[6]", 1, 1, 230, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(Xi[1])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[1])", 1,\
 6, 225, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(Xi[2])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[2])", 1,\
 6, 226, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(Xi[3])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[3])", 1,\
 6, 227, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(Xi[4])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[4])", 1,\
 6, 228, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(Xi[5])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[5])", 1,\
 6, 229, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(Xi[6])", \
"der(Structurally independent mass fractions) [s-1]", "sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[6])", 1,\
 6, 230, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].h", "Specific enthalpy of medium [J/kg]",\
 "sIEngine.Exhaust_HE.port_b2.h_outflow", 1, 5, 3538, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].d", "Density of medium [kg/m3|g/cm3]",\
 10, 0.0,100000.0,10.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(d)", \
"der(Density of medium) [Pa.m-2.s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[20].T", "Temperature of medium [K|degC]",\
 224, 500.0, 200.0,6000.0,500.0,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,576)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[20].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 225, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[1])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,576)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[20].X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 226, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[2])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,576)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[20].X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 227, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[3])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,576)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[20].X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 228, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[4])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,576)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[20].X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 229, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[5])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,576)
DeclareState("sIEngine.Exhaust_HE.pipe_2.mediums[20].X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 230, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(X[6])", \
"der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]", 0.0, \
0.0,0.0,0.0,0,576)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(u)", \
"der(Specific internal energy of medium) [m2/s3]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].der(R)", \
"der(Gas constant (of mixture if applicable)) [W/(kg.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.032, 0.001,0.25,0.032,0,512)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Ambient.p", 1, 7, 91, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Exhaust_HE.pipe_2.mediums[20].T", 1, 1, 224, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[20].X[1]", 1, 1, 225, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[20].X[2]", 1, 1, 226, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[20].X[3]", 1, 1, 227, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[20].X[4]", 1, 1, 228, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[20].X[5]", 1, 1, 229, 0)
DeclareAlias2("sIEngine.Exhaust_HE.pipe_2.mediums[20].state.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"sIEngine.Exhaust_HE.pipe_2.mediums[20].X[6]", 1, 1, 230, 0)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Exhaust_HE.pipe_2.mediums[20].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Inlet2.ports[1].p", 1, 5, 3553, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "sIEngine.Outlet_HE.port_a1.h_outflow", 1, 5, 5132, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[1].T", "Temperature of medium [K|degC]",\
 231, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[1].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[1].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Inlet2.ports[1].p", 1, 5, 3553, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[1].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[1].T", 1, 1, 231, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[1].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[2].T", "Temperature of medium [K|degC]",\
 232, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[2].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[2].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[2].p", 1, 5, 5713, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[2].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[2].T", 1, 1, 232, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[2].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[3].T", "Temperature of medium [K|degC]",\
 233, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[3].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[3].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[3].p", 1, 5, 5726, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[3].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[3].T", 1, 1, 233, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[3].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[4].T", "Temperature of medium [K|degC]",\
 234, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[4].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[4].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[4].p", 1, 5, 5739, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[4].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[4].T", 1, 1, 234, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[4].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[5].T", "Temperature of medium [K|degC]",\
 235, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[5].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[5].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[5].p", 1, 5, 5752, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[5].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[5].T", 1, 1, 235, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[5].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[6].T", "Temperature of medium [K|degC]",\
 236, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[6].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[6].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[6].p", 1, 5, 5765, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[6].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[6].T", 1, 1, 236, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[6].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[7].T", "Temperature of medium [K|degC]",\
 237, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[7].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[7].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[7].p", 1, 5, 5778, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[7].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[7].T", 1, 1, 237, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[7].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[8].T", "Temperature of medium [K|degC]",\
 238, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[8].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[8].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[8].p", 1, 5, 5791, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[8].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[8].T", 1, 1, 238, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[8].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[9].T", "Temperature of medium [K|degC]",\
 239, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[9].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[9].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[9].p", 1, 5, 5804, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[9].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[9].T", 1, 1, 239, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[9].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[10].T", "Temperature of medium [K|degC]",\
 240, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[10].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[10].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[10].p", 1, 5, 5817, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[10].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[10].T", 1, 1, 240, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[10].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[11].T", "Temperature of medium [K|degC]",\
 241, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[11].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[11].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[11].p", 1, 5, 5830, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[11].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[11].T", 1, 1, 241, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[11].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[12].T", "Temperature of medium [K|degC]",\
 242, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[12].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[12].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[12].p", 1, 5, 5843, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[12].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[12].T", 1, 1, 242, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[12].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[13].T", "Temperature of medium [K|degC]",\
 243, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[13].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[13].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[13].p", 1, 5, 5856, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[13].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[13].T", 1, 1, 243, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[13].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[14].T", "Temperature of medium [K|degC]",\
 244, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[14].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[14].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[14].p", 1, 5, 5869, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[14].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[14].T", 1, 1, 244, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[14].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[15].T", "Temperature of medium [K|degC]",\
 245, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[15].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[15].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[15].p", 1, 5, 5882, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[15].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[15].T", 1, 1, 245, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[15].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[16].T", "Temperature of medium [K|degC]",\
 246, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[16].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[16].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[16].p", 1, 5, 5895, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[16].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[16].T", 1, 1, 246, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[16].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[17].T", "Temperature of medium [K|degC]",\
 247, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[17].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[17].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[17].p", 1, 5, 5908, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[17].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[17].T", 1, 1, 247, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[17].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[18].T", "Temperature of medium [K|degC]",\
 248, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[18].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[18].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[18].p", 1, 5, 5921, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[18].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[18].T", 1, 1, 248, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[18].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[19].T", "Temperature of medium [K|degC]",\
 249, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[19].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[19].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[19].p", 1, 5, 5934, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[19].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[19].T", 1, 1, 249, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[19].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,1E+100,100000.0,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[20].h", "Specific enthalpy of medium [J/kg]",\
 "sIEngine.Outlet_HE.port_b1.h_outflow", 1, 5, 5131, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_1.mediums[20].T", "Temperature of medium [K|degC]",\
 250, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_1.mediums[20].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[20].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Tank_hot.p", 1, 7, 163, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_1.mediums[20].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_1.mediums[20].T", 1, 1, 250, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_1.mediums[20].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.EngineHot.ports[1].p", 1, 5, 5146, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "sIEngine.Outlet_HE.port_a2.h_outflow", 1, 5, 5134, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[1].T", "Temperature of medium [K|degC]",\
 251, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[1].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[1].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.EngineHot.ports[1].p", 1, 5, 5146, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[1].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[1].T", 1, 1, 251, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[1].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[2].T", "Temperature of medium [K|degC]",\
 252, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[2].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[2].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[2].p", 1, 5, 5969, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[2].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[2].T", 1, 1, 252, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[2].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[3].T", "Temperature of medium [K|degC]",\
 253, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[3].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[3].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[3].p", 1, 5, 5982, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[3].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[3].T", 1, 1, 253, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[3].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[4].T", "Temperature of medium [K|degC]",\
 254, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[4].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[4].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[4].p", 1, 5, 5995, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[4].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[4].T", 1, 1, 254, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[4].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[5].T", "Temperature of medium [K|degC]",\
 255, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[5].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[5].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[5].p", 1, 5, 6008, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[5].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[5].T", 1, 1, 255, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[5].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[6].T", "Temperature of medium [K|degC]",\
 256, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[6].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[6].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[6].p", 1, 5, 6021, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[6].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[6].T", 1, 1, 256, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[6].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[7].T", "Temperature of medium [K|degC]",\
 257, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[7].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[7].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[7].p", 1, 5, 6034, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[7].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[7].T", 1, 1, 257, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[7].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[8].T", "Temperature of medium [K|degC]",\
 258, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[8].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[8].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[8].p", 1, 5, 6047, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[8].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[8].T", 1, 1, 258, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[8].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[9].T", "Temperature of medium [K|degC]",\
 259, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[9].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[9].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[9].p", 1, 5, 6060, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[9].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[9].T", 1, 1, 259, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[9].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[10].T", "Temperature of medium [K|degC]",\
 260, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[10].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[10].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[10].p", 1, 5, 6073, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[10].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[10].T", 1, 1, 260, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[10].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[11].T", "Temperature of medium [K|degC]",\
 261, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[11].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[11].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[11].p", 1, 5, 6086, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[11].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[11].T", 1, 1, 261, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[11].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[12].T", "Temperature of medium [K|degC]",\
 262, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[12].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[12].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[12].p", 1, 5, 6099, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[12].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[12].T", 1, 1, 262, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[12].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[13].T", "Temperature of medium [K|degC]",\
 263, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[13].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[13].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[13].p", 1, 5, 6112, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[13].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[13].T", 1, 1, 263, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[13].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[14].T", "Temperature of medium [K|degC]",\
 264, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[14].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[14].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[14].p", 1, 5, 6125, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[14].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[14].T", 1, 1, 264, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[14].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[15].T", "Temperature of medium [K|degC]",\
 265, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[15].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[15].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[15].p", 1, 5, 6138, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[15].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[15].T", 1, 1, 265, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[15].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[16].T", "Temperature of medium [K|degC]",\
 266, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[16].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[16].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[16].p", 1, 5, 6151, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[16].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[16].T", 1, 1, 266, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[16].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[17].T", "Temperature of medium [K|degC]",\
 267, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[17].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[17].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[17].p", 1, 5, 6164, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[17].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[17].T", 1, 1, 267, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[17].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[18].T", "Temperature of medium [K|degC]",\
 268, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[18].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[18].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[18].p", 1, 5, 6177, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[18].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[18].T", 1, 1, 268, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[18].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].der(p)", "der(Absolute pressure of medium) [Pa/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[19].T", "Temperature of medium [K|degC]",\
 269, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[19].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[19].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[19].p", 1, 5, 6190, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[19].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[19].T", 1, 1, 269, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[19].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,1E+100,100000.0,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[20].h", "Specific enthalpy of medium [J/kg]",\
 "sIEngine.Outlet_HE.port_b2.h_outflow", 1, 5, 5133, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,100000.0,1.0,0,513)
DeclareState("sIEngine.Outlet_HE.pipe_2.mediums[20].T", "Temperature of medium [K|degC]",\
 270, 300.0, 1.0,10000.0,300.0,0,544)
DeclareDerivative("sIEngine.Outlet_HE.pipe_2.mediums[20].der(T)", \
"der(Temperature of medium) [K/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].der(u)", "der(Specific internal energy of medium) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,10000000.0,1000.0,0,513)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.001,0.25,0.032,0,513)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[20].state.p", "Absolute pressure of medium [Pa|bar]",\
 "sIEngine.EngineCold.p", 1, 7, 199, 0)
DeclareAlias2("sIEngine.Outlet_HE.pipe_2.mediums[20].state.T", "Temperature of medium [K|degC]",\
 "sIEngine.Outlet_HE.pipe_2.mediums[20].T", 1, 1, 270, 0)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("sIEngine.Outlet_HE.pipe_2.mediums[20].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
EndNonAlias(5)
PreNonAliasNew(6)
