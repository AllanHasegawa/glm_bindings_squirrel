
local v2a = vec2(0.0,3.3);
local v2b = vec2(1.0,13.1);
local v2c = vec2(0.64,5.1);
::print(v2a.to_string() + "\n");
::print(v2b.to_string() + "\n");
::print(v2c.to_string() + "\n");
::print("smoothstep: " + v2a.smoothstep(v2b,v2c).to_string() + "\n");
