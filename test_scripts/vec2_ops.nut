function to_string_vec2(v)
{
	return "(" + v.x + "," + v.y + ")";
}

function pb()
{
	for (local i = 0; i < 10; ++i) {
		::print("-");
	}
	::print("\n");
}


local my_vec2a = vec2(1,2);
::print(to_string_vec2(my_vec2a) + "+" + to_string_vec2(vec2(1)) + "\n");
my_vec2a += vec2(1);
::print(to_string_vec2(my_vec2a) + "\n");

pb();

my_vec2a = vec2(2,3);
::print(to_string_vec2(my_vec2a) + "+= itself\n");
my_vec2a += my_vec2a;
::print(to_string_vec2(my_vec2a) + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(10,20);
::print(to_string_vec2(my_vec2a) + " += " + to_string_vec2(my_vec2b) + "\n");
my_vec2a += my_vec2b;
::print(to_string_vec2(my_vec2a) + "\n");

pb()
local my_vec2a = vec2(1,2);
::print(to_string_vec2(my_vec2a) + "-" + to_string_vec2(vec2(1)) + "\n");
my_vec2a -= vec2(1);
::print(to_string_vec2(my_vec2a) + "\n");

pb();
my_vec2a = vec2(2,3);
::print(to_string_vec2(my_vec2a) + "-= itself\n");
my_vec2a -= my_vec2a;
::print(to_string_vec2(my_vec2a) + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(10,20);
::print(to_string_vec2(my_vec2a) + " -= " + to_string_vec2(my_vec2b) + "\n");
my_vec2a -= my_vec2b;
::print(to_string_vec2(my_vec2a) + "\n");


pb()
local my_vec2a = vec2(1,2);
::print(to_string_vec2(my_vec2a) + "*" + to_string_vec2(vec2(1)) + "\n");
my_vec2a *= vec2(1);
::print(to_string_vec2(my_vec2a) + "\n");

pb();
my_vec2a = vec2(2,3);
::print(to_string_vec2(my_vec2a) + "*= itself\n");
my_vec2a *= my_vec2a;
::print(to_string_vec2(my_vec2a) + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(10,20);
::print(to_string_vec2(my_vec2a) + " *= " + to_string_vec2(my_vec2b) + "\n");
my_vec2a *= my_vec2b;
::print(to_string_vec2(my_vec2a) + "\n");


pb()
local my_vec2a = vec2(1,2);
::print(to_string_vec2(my_vec2a) + "/" + to_string_vec2(vec2(1)) + "\n");
my_vec2a /= vec2(1);
::print(to_string_vec2(my_vec2a) + "\n");

pb();
my_vec2a = vec2(2,3);
::print(to_string_vec2(my_vec2a) + "/= itself\n");
my_vec2a /= my_vec2a;
::print(to_string_vec2(my_vec2a) + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(10,20);
::print(to_string_vec2(my_vec2a) + " /= " + to_string_vec2(my_vec2b) + "\n");
my_vec2a /= my_vec2b;
::print(to_string_vec2(my_vec2a) + "\n");


pb()
local my_vec2a = vec2(1,2);
::print(to_string_vec2(my_vec2a) + "%" + to_string_vec2(vec2(1)) + "\n");
my_vec2a %= vec2(1);
::print(to_string_vec2(my_vec2a) + "\n");

pb();
my_vec2a = vec2(2,3);
::print(to_string_vec2(my_vec2a) + "%= itself\n");
my_vec2a %= my_vec2a;
::print(to_string_vec2(my_vec2a) + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(2,2);
::print(to_string_vec2(my_vec2a) + " %= " + to_string_vec2(my_vec2b) + "\n");
my_vec2a %= my_vec2b;
::print(to_string_vec2(my_vec2a) + "\n");

