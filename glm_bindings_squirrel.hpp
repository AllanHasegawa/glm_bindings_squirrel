
#include <string>

#include <glm/glm.hpp>
#include <sqrat.h>

void bind_glm_squirrel(HSQUIRRELVM vm)
{
	using namespace Sqrat;
	using namespace std;
	using namespace glm;

	Table t_glm(vm);

	Class<vec3> c_vec3(vm);
	c_vec3.Ctor();
	c_vec3.Ctor<float>();
	c_vec3.Ctor<float,float,float>();
	c_vec3.Var("x", &vec3::x);
	c_vec3.Var("y", &vec3::y);
	c_vec3.Var("z", &vec3::z);
	RootTable(vm).Bind("vec3", c_vec3);

}
