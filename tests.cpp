#include <iostream>
#include <fstream>
#include <string>

#include <glm/glm.hpp>
#include <sqrat.h>

#include "glm_bindings_squirrel.hpp"

using namespace std;
using namespace Sqrat;
using namespace glm;

static void printfunc(HSQUIRRELVM v,const SQChar *s,...) {
	va_list vl;
	va_start(vl, s);
	vprintf(s, vl);
	va_end(vl);
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
		string error_msg;
		if (!script.CompileFile("test_scripts/vec3_ops.nut", error_msg)) {
			cout << error_msg << endl;
			return 0;
		}
		if (!script.Run(error_msg)) {
			cout << error_msg << endl;
			return 0;
		}
		if (!script.CompileFile("test_scripts/vec2_ops.nut", error_msg)) {
			cout << error_msg << endl;
			return 0;
		}
		if (!script.Run(error_msg)) {
			cout << error_msg << endl;
			return 0;
		}
	}
	sq_close(vm);

	return 0;
}
