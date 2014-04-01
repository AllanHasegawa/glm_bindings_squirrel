
local v2a = vec2(1.0,1.1);
local v2b = vec2(2.0,3.1);
local v2c = vec2(4.0,5.1);
::print(v2a.to_string() + "\n");
::print(v2b.to_string() + "\n");
::print(v2c.to_string() + "\n");
::print("fma: " + v2a.fma(v2b,v2c).to_string() + "\n");

