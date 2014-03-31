
function pb()
{
	for (local i = 0; i < 10; ++i) {
		::print("-");
	}
	::print("\n");
}


local my_vec3a = vec3(1,2,3);
::print(my_vec3a.to_string() + "+" + vec3(1).to_string() + "\n");
my_vec3a += vec3(1);
::print(my_vec3a.to_string() + "\n");

pb();

my_vec3a = vec3(2,3,4);
::print(my_vec3a.to_string() + "+= itself\n");
my_vec3a += my_vec3a;
::print(my_vec3a.to_string() + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(10,20,30);
::print(my_vec3a.to_string() + " += " + my_vec3b.to_string() + "\n");
my_vec3a += my_vec3b;
::print(my_vec3a.to_string() + "\n");

pb()
local my_vec3a = vec3(1,2,3);
::print(my_vec3a.to_string() + "-" + vec3(1).to_string() + "\n");
my_vec3a -= vec3(1);
::print(my_vec3a.to_string() + "\n");

pb();
my_vec3a = vec3(2,3,4);
::print(my_vec3a.to_string() + "-= itself\n");
my_vec3a -= my_vec3a;
::print(my_vec3a.to_string() + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(10,20,30);
::print(my_vec3a.to_string() + " -= " + my_vec3b.to_string() + "\n");
my_vec3a -= my_vec3b;
::print(my_vec3a.to_string() + "\n");


pb()
local my_vec3a = vec3(1,2,3);
::print(my_vec3a.to_string() + "*" + vec3(1).to_string() + "\n");
my_vec3a *= vec3(1);
::print(my_vec3a.to_string() + "\n");

pb();
my_vec3a = vec3(2,3,4);
::print(my_vec3a.to_string() + "*= itself\n");
my_vec3a *= my_vec3a;
::print(my_vec3a.to_string() + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(10,20,30);
::print(my_vec3a.to_string() + " *= " + my_vec3b.to_string() + "\n");
my_vec3a *= my_vec3b;
::print(my_vec3a.to_string() + "\n");


pb()
local my_vec3a = vec3(1,2,3);
::print(my_vec3a.to_string() + "/" + vec3(1).to_string() + "\n");
my_vec3a /= vec3(1);
::print(my_vec3a.to_string() + "\n");

pb();
my_vec3a = vec3(2,3,4);
::print(my_vec3a.to_string() + "/= itself\n");
my_vec3a /= my_vec3a;
::print(my_vec3a.to_string() + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(10,20,30);
::print(my_vec3a.to_string() + " /= " + my_vec3b.to_string() + "\n");
my_vec3a /= my_vec3b;
::print(my_vec3a.to_string() + "\n");


pb()
local my_vec3a = vec3(1,2,3);
::print(my_vec3a.to_string() + "%" + vec3(1).to_string() + "\n");
my_vec3a %= vec3(1);
::print(my_vec3a.to_string() + "\n");

pb();
my_vec3a = vec3(2,3,4);
::print(my_vec3a.to_string() + "%= itself\n");
my_vec3a %= my_vec3a;
::print(my_vec3a.to_string() + "\n");

pb();
my_vec3a = vec3(2,3,4);
local my_vec3b = vec3(2,2,2);
::print(my_vec3a.to_string() + " %= " + my_vec3b.to_string() + "\n");
my_vec3a %= my_vec3b;
::print(my_vec3a.to_string() + "\n");
