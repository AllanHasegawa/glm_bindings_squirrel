
local v2 = vec2(1.0,1.1);
::print(v2.to_string() + "\n");
::print("round: " + v2.round().to_string() + "\n");

local v3 = vec3(1.0,1.1,1.6);
::print(v3.to_string() + "\n");
::print("round: " + v3.round().to_string() + "\n");

local v4 = vec4(1.0,1.1,1.6,-1.4);
::print(v4.to_string() + "\n");
::print("round: " + v4.round().to_string() + "\n");


v2 = vec2(1.0,1.1);
::print(v2.to_string() + "\n");
::print("roundEven: " + v2.roundEven().to_string() + "\n");

v3 = vec3(1.0,1.1,1.6);
::print(v3.to_string() + "\n");
::print("roundEven: " + v3.roundEven().to_string() + "\n");

v4 = vec4(1.0,1.1,1.6,-1.4);
::print(v4.to_string() + "\n");
::print("roundEven: " + v4.roundEven().to_string() + "\n");
