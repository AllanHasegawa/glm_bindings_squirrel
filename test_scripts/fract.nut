
local v2 = vec2(-32.2345,40);
::print(v2.to_string() + "\n");
::print("fract: " + v2.fract().to_string() + "\n");

local v3 = vec3(-32.2345,40,-09);
::print(v3.to_string() + "\n");
::print("fract: " + v3.fract().to_string() + "\n");

local v4 = vec4(-32.2345,40,-09,123.321);
::print(v4.to_string() + "\n");
::print("fract: " + v4.fract().to_string() + "\n");
