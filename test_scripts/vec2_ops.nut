function pb()
{
	for (local i = 0; i < 10; ++i) {
		::print("-");
	}
	::print("\n");
}


local my_vec2a = vec2(1,2);
::print(my_vec2a.to_string() + "+" + vec2(1).to_string() + "\n");
my_vec2a += vec2(1);
::print(my_vec2a.to_string() + "\n");

pb();

my_vec2a = vec2(2,3);
::print(my_vec2a.to_string() + "+= itself\n");
my_vec2a += my_vec2a;
::print(my_vec2a.to_string() + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(10,20);
::print(my_vec2a.to_string() + " += " + my_vec2b.to_string() + "\n");
my_vec2a += my_vec2b;
::print(my_vec2a.to_string() + "\n");

pb()
local my_vec2a = vec2(1,2);
::print(my_vec2a.to_string() + "-" + vec2(1).to_string() + "\n");
my_vec2a -= vec2(1);
::print(my_vec2a.to_string() + "\n");

pb();
my_vec2a = vec2(2,3);
::print(my_vec2a.to_string() + "-= itself\n");
my_vec2a -= my_vec2a;
::print(my_vec2a.to_string() + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(10,20);
::print(my_vec2a.to_string() + " -= " + my_vec2b.to_string() + "\n");
my_vec2a -= my_vec2b;
::print(my_vec2a.to_string() + "\n");


pb()
local my_vec2a = vec2(1,2);
::print(my_vec2a.to_string() + "*" + vec2(1).to_string() + "\n");
my_vec2a *= vec2(1);
::print(my_vec2a.to_string() + "\n");

pb();
my_vec2a = vec2(2,3);
::print(my_vec2a.to_string() + "*= itself\n");
my_vec2a *= my_vec2a;
::print(my_vec2a.to_string() + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(10,20);
::print(my_vec2a.to_string() + " *= " + my_vec2b.to_string() + "\n");
my_vec2a *= my_vec2b;
::print(my_vec2a.to_string() + "\n");


pb()
local my_vec2a = vec2(1,2);
::print(my_vec2a.to_string() + "/" + vec2(1).to_string() + "\n");
my_vec2a /= vec2(1);
::print(my_vec2a.to_string() + "\n");

pb();
my_vec2a = vec2(2,3);
::print(my_vec2a.to_string() + "/= itself\n");
my_vec2a /= my_vec2a;
::print(my_vec2a.to_string() + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(10,20);
::print(my_vec2a.to_string() + " /= " + my_vec2b.to_string() + "\n");
my_vec2a /= my_vec2b;
::print(my_vec2a.to_string() + "\n");


pb()
local my_vec2a = vec2(1,2);
::print(my_vec2a.to_string() + "%" + vec2(1).to_string() + "\n");
my_vec2a %= vec2(1);
::print(my_vec2a.to_string() + "\n");

pb();
my_vec2a = vec2(2,3);
::print(my_vec2a.to_string() + "%= itself\n");
my_vec2a %= my_vec2a;
::print(my_vec2a.to_string() + "\n");

pb();
my_vec2a = vec2(2,3);
local my_vec2b = vec2(2,2);
::print(my_vec2a.to_string() + " %= " + my_vec2b.to_string() + "\n");
my_vec2a %= my_vec2b;
::print(my_vec2a.to_string() + "\n");

