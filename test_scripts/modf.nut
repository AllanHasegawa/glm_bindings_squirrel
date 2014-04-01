
local v2a = vec2(5.0,1.1);
local v2b = vec2(2.0,3.1);
::print(v2a.to_string() + "\n");
::print(v2b.to_string() + "\n");
::print("modf a: " + v2a.modf(v2b).to_string() + "\n");
::print("modf b: " + v2b.to_string() + "\n");
