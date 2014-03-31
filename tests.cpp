#include <iostream>
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

string nut_src = R"(

my_vec3 <- vec3(1,2,3);
::print(my_vec3.x + "\n");

)";

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
		if (!script.CompileString(nut_src, error_msg)) {
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
