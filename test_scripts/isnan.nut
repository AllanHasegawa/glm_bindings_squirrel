

local v2 = vec2(GLM_INFINITY,GLM_QUIET_NAN);
::print(v2.to_string() + "\n");
::print("isnan: " + v2.isnan().to_string() + "\n");

local v3 = vec3(GLM_INFINITY,GLM_QUIET_NAN,-09);
::print(v3.to_string() + "\n");
::print("isnan: " + v3.isnan().to_string() + "\n");

local v4 = vec4(GLM_INFINITY,GLM_QUIET_NAN,-09,GLM_SIGNALING_NAN);
::print(v4.to_string() + "\n");
::print("isnan: " + v4.isnan().to_string() + "\n");
