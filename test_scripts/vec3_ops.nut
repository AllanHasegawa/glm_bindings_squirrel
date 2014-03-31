
function to_string_vec3(v)
{
	return "(" + v.x + "," + v.y + "," + v.z + ")";
}

function pb()
{
	for (local i = 0; i < 10; ++i) {
		::print("-");
	}
	::print("\n");
}


local my_vec3a = vec3(1,2,3);
::print(to_string_vec3(my_vec3a) + "+" + to_string_vec3(vec3(1)) + "\n");
my_vec3a += vec3(1);
::print(to_string_vec3(my_vec3a) + "\n");

pb();

my_vec3a = vec3(2,3,4);
::print(to_string_vec3(my_vec3a) + "+= itself\n");
my_vec3a += my_vec3a;
::print(to_string_vec3(my_vec3a) + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(10,20,30);
::print(to_string_vec3(my_vec3a) + " += " + to_string_vec3(my_vec3b) + "\n");
my_vec3a += my_vec3b;
::print(to_string_vec3(my_vec3a) + "\n");

pb()
local my_vec3a = vec3(1,2,3);
::print(to_string_vec3(my_vec3a) + "-" + to_string_vec3(vec3(1)) + "\n");
my_vec3a -= vec3(1);
::print(to_string_vec3(my_vec3a) + "\n");

pb();
my_vec3a = vec3(2,3,4);
::print(to_string_vec3(my_vec3a) + "-= itself\n");
my_vec3a -= my_vec3a;
::print(to_string_vec3(my_vec3a) + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(10,20,30);
::print(to_string_vec3(my_vec3a) + " -= " + to_string_vec3(my_vec3b) + "\n");
my_vec3a -= my_vec3b;
::print(to_string_vec3(my_vec3a) + "\n");


pb()
local my_vec3a = vec3(1,2,3);
::print(to_string_vec3(my_vec3a) + "*" + to_string_vec3(vec3(1)) + "\n");
my_vec3a *= vec3(1);
::print(to_string_vec3(my_vec3a) + "\n");

pb();
my_vec3a = vec3(2,3,4);
::print(to_string_vec3(my_vec3a) + "*= itself\n");
my_vec3a *= my_vec3a;
::print(to_string_vec3(my_vec3a) + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(10,20,30);
::print(to_string_vec3(my_vec3a) + " *= " + to_string_vec3(my_vec3b) + "\n");
my_vec3a *= my_vec3b;
::print(to_string_vec3(my_vec3a) + "\n");


pb()
local my_vec3a = vec3(1,2,3);
::print(to_string_vec3(my_vec3a) + "/" + to_string_vec3(vec3(1)) + "\n");
my_vec3a /= vec3(1);
::print(to_string_vec3(my_vec3a) + "\n");

pb();
my_vec3a = vec3(2,3,4);
::print(to_string_vec3(my_vec3a) + "/= itself\n");
my_vec3a /= my_vec3a;
::print(to_string_vec3(my_vec3a) + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(10,20,30);
::print(to_string_vec3(my_vec3a) + " /= " + to_string_vec3(my_vec3b) + "\n");
my_vec3a /= my_vec3b;
::print(to_string_vec3(my_vec3a) + "\n");


pb()
local my_vec3a = vec3(1,2,3);
::print(to_string_vec3(my_vec3a) + "%" + to_string_vec3(vec3(1)) + "\n");
my_vec3a %= vec3(1);
::print(to_string_vec3(my_vec3a) + "\n");

pb();
my_vec3a = vec3(2,3,4);
::print(to_string_vec3(my_vec3a) + "%= itself\n");
my_vec3a %= my_vec3a;
::print(to_string_vec3(my_vec3a) + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(2,2,2);
::print(to_string_vec3(my_vec3a) + " %= " + to_string_vec3(my_vec3b) + "\n");
my_vec3a %= my_vec3b;
::print(to_string_vec3(my_vec3a) + "\n");
