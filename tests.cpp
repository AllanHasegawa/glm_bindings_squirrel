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
		//compile_and_run("test_scripts/vec2_ops.nut", script);
		//compile_and_run("test_scripts/vec3_ops.nut", script);
		//compile_and_run("test_scripts/abs.nut", script);
		//compile_and_run("test_scripts/ceil.nut", script);
		//compile_and_run("test_scripts/clamp.nut", script);
		//compile_and_run("test_scripts/fma.nut", script);
		//compile_and_run("test_scripts/fract.nut", script);
		//compile_and_run("test_scripts/isinf.nut", script);
		//compile_and_run("test_scripts/isnan.nut", script);
		//compile_and_run("test_scripts/max.nut", script);
		//compile_and_run("test_scripts/min.nut", script);
		//compile_and_run("test_scripts/mod.nut", script);
		//compile_and_run("test_scripts/modf.nut", script);
		//compile_and_run("test_scripts/round.nut", script);
		//compile_and_run("test_scripts/sign.nut", script);
		//compile_and_run("test_scripts/smoothstep.nut", script);
		//compile_and_run("test_scripts/step.nut", script);
		compile_and_run("test_scripts/trunc.nut", script);
	}
	sq_close(vm);

	return 0;
}
