
local v2 = vec2(GLM_INFINITY,40);
::print(v2.to_string() + "\n");
::print("isinf: " + v2.isinf().to_string() + "\n");

local v3 = vec3(GLM_INFINITY,40,-09);
::print(v3.to_string() + "\n");
::print("isinf: " + v3.isinf().to_string() + "\n");

local v4 = vec4(GLM_INFINITY,40,-09,123);
::print(v4.to_string() + "\n");
::print("isinf: " + v4.isinf().to_string() + "\n");
