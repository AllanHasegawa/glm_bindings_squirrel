
function squirrel_add(a,b)
{
	//print(a + "\n");
	//print(b + "\n");
	return a + b;
}

local la = [vec3(1)];
local lb = [vec3(1,2,3)];

function squirrel_add_ref(a,b)
{
	print("ra: " + a[0] + "\n")
	print("rb: " + b[0] + "\n")
	a[0] += b[0];
	print("ra: " + a[0] + "\n")
}

function squirrel_add_ref2(a,b)
{
	print("ka: " + a + "\n")
	print("kb: " + b + "\n")
	a += b;
	print("ka: " + a + "\n")
}

print("--" + la[0] + "\n");
squirrel_add_ref(la,lb);
print("--" + la[0] + "\n");
