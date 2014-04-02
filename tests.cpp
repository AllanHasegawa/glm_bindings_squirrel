#include <iostream>
#include <fstream>
#include <string>
#include <functional>

#include <glm/glm.hpp>
#include <sqrat.h>

#include "glm_bindings_squirrel.hpp"

using namespace std;
using namespace Sqrat;
using namespace glm;
using namespace gbs;

static void printfunc(HSQUIRRELVM v,const SQChar *s,...) {
	va_list vl;
	va_start(vl, s);
	vprintf(s, vl);
	va_end(vl);
}

void compile_and_run(const std::string& kFileName, Sqrat::Script& script)
{
	string error_msg;
	if (!script.CompileFile(kFileName, error_msg)) {
		cout << error_msg << endl;
		return;
	}
	if (!script.Run(error_msg)) {
		cout << error_msg << endl;
		return;
	}
}
/*
 * [TODO] proper unit tests
 */
int main()
{
	HSQUIRRELVM vm = sq_open(1024);
	sq_setprintfunc(vm, printfunc, printfunc);
	{
		// calling bind before scripts
		bind_glm_squirrel(vm);

		Script script(vm);
		{
			// Just getting a return is simple
			compile_and_run("test_scripts/add_native_var.nut", script);
			Function f(RootTable(vm), "squirrel_add");
			glm::vec3 a{0,1,2};
			glm::vec3 b{1,2,3};
			SharedPtr<vec3> ic = f.Evaluate<vec3,vec3,vec3>(a,b);
			cout << to_string(*ic) << endl;

			// In Squirrel, all primitive types pass by value.
			// To pass by "ref", pass via array.
			Function f2(RootTable(vm), "squirrel_add_ref");
			cout << to_string(a) << endl;
			Array aa(vm);
			aa.Append(&a);
			Array ab(vm);
			ab.Append(&b);
			f2.Execute(aa,ab);
			cout << "a: " << to_string(a) << endl;
			cout << "a: " << to_string(*(aa.GetValue<vec3>(0))) << endl;
			cout << "b: " << to_string(b) << endl;
		}
	}
	sq_close(vm);

	return 0;
}
