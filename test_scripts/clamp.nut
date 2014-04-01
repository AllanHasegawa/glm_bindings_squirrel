

local v2 = vec2(1.0,1.1);
::print(v2.to_string() + "\n");
::print("clamp: " + v2.clamp(-1,1.5).to_string() + "\n");

local v3 = vec3(1.0,1.1,1.6);
::print(v3.to_string() + "\n");
::print("clamp: " + v3.clamp(-1,1.5).to_string() + "\n");

local v4 = vec4(1.0,1.1,1.6,-1.4);
::print(v4.to_string() + "\n");
::print("clamp: " + v4.clamp(-1,1.5).to_string() + "\n");
