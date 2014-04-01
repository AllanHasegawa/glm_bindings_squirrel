
#include <string>
#include <limits>

#include <glm/glm.hpp>
#include <sqrat.h>


static std::string to_string(const glm::vec2& kV);
static std::string to_string(const glm::vec3& kV);
static std::string to_string(const glm::vec4& kV);
static std::string to_string(const glm::ivec2& kV);
static std::string to_string(const glm::ivec3& kV);
static std::string to_string(const glm::ivec4& kV);
static std::string to_string(const glm::uvec2& kV);
static std::string to_string(const glm::uvec3& kV);
static std::string to_string(const glm::uvec4& kV);
static std::string to_string(const glm::bvec2& kV);
static std::string to_string(const glm::bvec3& kV);
static std::string to_string(const glm::bvec4& kV);

void bind_glm_consts(HSQUIRRELVM vm);
void bind_glm_vec_types(HSQUIRRELVM);
void bind_glm_core_common(HSQUIRRELVM);
void bind_glm_core_geometric(HSQUIRRELVM);
void bind_glm_core_exponential(HSQUIRRELVM);

void bind_glm_squirrel(HSQUIRRELVM vm)
{
	bind_glm_consts(vm);
	bind_glm_vec_types(vm);
	bind_glm_core_common(vm);
	bind_glm_core_geometric(vm);
	bind_glm_core_exponential(vm);
}

void bind_glm_vec_types(HSQUIRRELVM vm)
{
	using namespace Sqrat;
	using namespace std;
	using namespace glm;

	/*
	 * glm::vec2
	 */
	Class<vec2> c_vec2(vm);
	c_vec2.Ctor();
	c_vec2.Ctor<float>();
	c_vec2.Ctor<float,float>();
	c_vec2.Var("x", &vec2::x);
	c_vec2.Var("y", &vec2::y);
	c_vec2.Var("r", &vec2::r);
	c_vec2.Var("g", &vec2::g);
	c_vec2.Var("s", &vec2::r);
	c_vec2.Var("t", &vec2::g);
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>(
			"_add", &detail::operator+);
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>(
			"_sub", &detail::operator-);
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>(
			"_mul", &detail::operator*);
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>(
			"_div", &detail::operator/);
	c_vec2.GlobalFunc<string (*)(const vec2&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for floats? 
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("vec2", c_vec2);
	

	/*
	 * glm::vec3
	 */
	Class<vec3> c_vec3(vm);
	c_vec3.Ctor();
	c_vec3.Ctor<float>();
	c_vec3.Ctor<float,float,float>();
	c_vec3.Var("x", &vec3::x);
	c_vec3.Var("y", &vec3::y);
	c_vec3.Var("z", &vec3::z);
	c_vec3.Var("r", &vec3::r);
	c_vec3.Var("g", &vec3::g);
	c_vec3.Var("b", &vec3::b);
	c_vec3.Var("s", &vec3::r);
	c_vec3.Var("t", &vec3::g);
	c_vec3.Var("p", &vec3::b);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"_add", &detail::operator+);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"_sub", &detail::operator-);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"_mul", &detail::operator*);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"_div", &detail::operator/);
	c_vec3.GlobalFunc<string (*)(const vec3&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for floats? 
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("vec3", c_vec3);

	/*
	 * glm::vec4
	 */
	Class<vec4> c_vec4(vm);
	c_vec4.Ctor();
	c_vec4.Ctor<float>();
	c_vec4.Ctor<float,float,float,float>();
	c_vec4.Var("x", &vec4::x);
	c_vec4.Var("y", &vec4::y);
	c_vec4.Var("z", &vec4::z);
	c_vec4.Var("w", &vec4::w);
	c_vec4.Var("r", &vec4::r);
	c_vec4.Var("g", &vec4::g);
	c_vec4.Var("b", &vec4::b);
	c_vec4.Var("a", &vec4::a);
	c_vec4.Var("s", &vec4::s);
	c_vec4.Var("t", &vec4::t);
	c_vec4.Var("p", &vec4::p);
	c_vec4.Var("q", &vec4::q);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>(
			"_add", &detail::operator+);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>(
			"_sub", &detail::operator-);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>(
			"_mul", &detail::operator*);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>(
			"_div", &detail::operator/);
	c_vec4.GlobalFunc<string (*)(const vec4&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for floats? 
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("vec4", c_vec4);


	/*
	 * glm::ivec2
	 */
	Class<ivec2> c_ivec2(vm);
	c_ivec2.Ctor();
	c_ivec2.Ctor<int>();
	c_ivec2.Ctor<int,int>();
	c_ivec2.Var("x", &ivec2::x);
	c_ivec2.Var("y", &ivec2::y);
	c_ivec2.Var("r", &ivec2::r);
	c_ivec2.Var("g", &ivec2::g);
	c_ivec2.Var("s", &ivec2::r);
	c_ivec2.Var("t", &ivec2::g);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&,const ivec2&)>(
			"_add", &detail::operator+);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&,const ivec2&)>(
			"_sub", &detail::operator-);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&,const ivec2&)>(
			"_mul", &detail::operator*);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&,const ivec2&)>(
			"_div", &detail::operator/);
	c_ivec2.GlobalFunc<string (*)(const ivec2&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for ints? 
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("ivec2", c_ivec2);
	

	/*
	 * glm::ivec3
	 */
	Class<ivec3> c_ivec3(vm);
	c_ivec3.Ctor();
	c_ivec3.Ctor<int>();
	c_ivec3.Ctor<int,int,int>();
	c_ivec3.Var("x", &ivec3::x);
	c_ivec3.Var("y", &ivec3::y);
	c_ivec3.Var("z", &ivec3::z);
	c_ivec3.Var("r", &ivec3::r);
	c_ivec3.Var("g", &ivec3::g);
	c_ivec3.Var("b", &ivec3::b);
	c_ivec3.Var("s", &ivec3::r);
	c_ivec3.Var("t", &ivec3::g);
	c_ivec3.Var("p", &ivec3::b);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&,const ivec3&)>(
			"_add", &detail::operator+);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&,const ivec3&)>(
			"_sub", &detail::operator-);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&,const ivec3&)>(
			"_mul", &detail::operator*);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&,const ivec3&)>(
			"_div", &detail::operator/);
	c_ivec3.GlobalFunc<string (*)(const ivec3&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for floats? 
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("ivec3", c_ivec3);

	/*
	 * glm::ivec4
	 */
	Class<ivec4> c_ivec4(vm);
	c_ivec4.Ctor();
	c_ivec4.Ctor<int>();
	c_ivec4.Ctor<int,int,int,int>();
	c_ivec4.Var("x", &ivec4::x);
	c_ivec4.Var("y", &ivec4::y);
	c_ivec4.Var("z", &ivec4::z);
	c_ivec4.Var("w", &ivec4::w);
	c_ivec4.Var("r", &ivec4::r);
	c_ivec4.Var("g", &ivec4::g);
	c_ivec4.Var("b", &ivec4::b);
	c_ivec4.Var("a", &ivec4::a);
	c_ivec4.Var("s", &ivec4::s);
	c_ivec4.Var("t", &ivec4::t);
	c_ivec4.Var("p", &ivec4::p);
	c_ivec4.Var("q", &ivec4::q);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&,const ivec4&)>(
			"_add", &detail::operator+);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&,const ivec4&)>(
			"_sub", &detail::operator-);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&,const ivec4&)>(
			"_mul", &detail::operator*);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&,const ivec4&)>(
			"_div", &detail::operator/);
	c_ivec4.GlobalFunc<string (*)(const ivec4&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for floats? 
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("ivec4", c_ivec4);

	/*
	 * glm::uvec2
	 */
	Class<uvec2> c_uvec2(vm);
	c_uvec2.Ctor();
	c_uvec2.Ctor<unsigned int>();
	c_uvec2.Ctor<unsigned int,unsigned int>();
	c_uvec2.Var("x", &uvec2::x);
	c_uvec2.Var("y", &uvec2::y);
	c_uvec2.Var("r", &uvec2::r);
	c_uvec2.Var("g", &uvec2::g);
	c_uvec2.Var("s", &uvec2::r);
	c_uvec2.Var("t", &uvec2::g);
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&,const uvec2&)>(
			"_add", &detail::operator+);
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&,const uvec2&)>(
			"_sub", &detail::operator-);
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&,const uvec2&)>(
			"_mul", &detail::operator*);
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&,const uvec2&)>(
			"_div", &detail::operator/);
	c_uvec2.GlobalFunc<string (*)(const uvec2&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for unsigned ints? 
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&,const unsigned int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("uvec2", c_uvec2);
	

	/*
	 * glm::uvec3
	 */
	Class<uvec3> c_uvec3(vm);
	c_uvec3.Ctor();
	c_uvec3.Ctor<unsigned int>();
	c_uvec3.Ctor<unsigned int,unsigned int,unsigned int>();
	c_uvec3.Var("x", &uvec3::x);
	c_uvec3.Var("y", &uvec3::y);
	c_uvec3.Var("z", &uvec3::z);
	c_uvec3.Var("r", &uvec3::r);
	c_uvec3.Var("g", &uvec3::g);
	c_uvec3.Var("b", &uvec3::b);
	c_uvec3.Var("s", &uvec3::r);
	c_uvec3.Var("t", &uvec3::g);
	c_uvec3.Var("p", &uvec3::b);
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&,const uvec3&)>(
			"_add", &detail::operator+);
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&,const uvec3&)>(
			"_sub", &detail::operator-);
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&,const uvec3&)>(
			"_mul", &detail::operator*);
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&,const uvec3&)>(
			"_div", &detail::operator/);
	c_uvec3.GlobalFunc<string (*)(const uvec3&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for floats? 
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("uvec3", c_uvec3);

	/*
	 * glm::uvec4
	 */
	Class<uvec4> c_uvec4(vm);
	c_uvec4.Ctor();
	c_uvec4.Ctor<unsigned int>();
	c_uvec4.Ctor<unsigned int,unsigned int,unsigned int,unsigned int>();
	c_uvec4.Var("x", &uvec4::x);
	c_uvec4.Var("y", &uvec4::y);
	c_uvec4.Var("z", &uvec4::z);
	c_uvec4.Var("w", &uvec4::w);
	c_uvec4.Var("r", &uvec4::r);
	c_uvec4.Var("g", &uvec4::g);
	c_uvec4.Var("b", &uvec4::b);
	c_uvec4.Var("a", &uvec4::a);
	c_uvec4.Var("s", &uvec4::s);
	c_uvec4.Var("t", &uvec4::t);
	c_uvec4.Var("p", &uvec4::p);
	c_uvec4.Var("q", &uvec4::q);
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&,const uvec4&)>(
			"_add", &detail::operator+);
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&,const uvec4&)>(
			"_sub", &detail::operator-);
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&,const uvec4&)>(
			"_mul", &detail::operator*);
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&,const uvec4&)>(
			"_div", &detail::operator/);
	c_uvec4.GlobalFunc<string (*)(const uvec4&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for floats? 
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("uvec4", c_uvec4);

	/*
	 * glm::bvec2
	 */
	Class<bvec2> c_bvec2(vm);
	c_bvec2.Ctor();
	c_bvec2.Ctor<unsigned int>();
	c_bvec2.Ctor<unsigned int,unsigned int>();
	c_bvec2.Var("x", &bvec2::x);
	c_bvec2.Var("y", &bvec2::y);
	c_bvec2.Var("r", &bvec2::r);
	c_bvec2.Var("g", &bvec2::g);
	c_bvec2.Var("s", &bvec2::r);
	c_bvec2.Var("t", &bvec2::g);
	c_bvec2.GlobalFunc<bvec2 (*)(const bvec2&,const bvec2&)>(
			"_add", &detail::operator+);
	c_bvec2.GlobalFunc<bvec2 (*)(const bvec2&,const bvec2&)>(
			"_sub", &detail::operator-);
	c_bvec2.GlobalFunc<bvec2 (*)(const bvec2&,const bvec2&)>(
			"_mul", &detail::operator*);
	c_bvec2.GlobalFunc<bvec2 (*)(const bvec2&,const bvec2&)>(
			"_div", &detail::operator/);
	c_bvec2.GlobalFunc<string (*)(const bvec2&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for unsigned ints? 
	c_bvec2.GlobalFunc<bvec2 (*)(const bvec2&,const unsigned int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("bvec2", c_bvec2);
	

	/*
	 * glm::bvec3
	 */
	Class<bvec3> c_bvec3(vm);
	c_bvec3.Ctor();
	c_bvec3.Ctor<unsigned int>();
	c_bvec3.Ctor<unsigned int,unsigned int,unsigned int>();
	c_bvec3.Var("x", &bvec3::x);
	c_bvec3.Var("y", &bvec3::y);
	c_bvec3.Var("z", &bvec3::z);
	c_bvec3.Var("r", &bvec3::r);
	c_bvec3.Var("g", &bvec3::g);
	c_bvec3.Var("b", &bvec3::b);
	c_bvec3.Var("s", &bvec3::r);
	c_bvec3.Var("t", &bvec3::g);
	c_bvec3.Var("p", &bvec3::b);
	c_bvec3.GlobalFunc<bvec3 (*)(const bvec3&,const bvec3&)>(
			"_add", &detail::operator+);
	c_bvec3.GlobalFunc<bvec3 (*)(const bvec3&,const bvec3&)>(
			"_sub", &detail::operator-);
	c_bvec3.GlobalFunc<bvec3 (*)(const bvec3&,const bvec3&)>(
			"_mul", &detail::operator*);
	c_bvec3.GlobalFunc<bvec3 (*)(const bvec3&,const bvec3&)>(
			"_div", &detail::operator/);
	c_bvec3.GlobalFunc<string (*)(const bvec3&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for floats? 
	c_bvec3.GlobalFunc<bvec3 (*)(const bvec3&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("bvec3", c_bvec3);

	/*
	 * glm::bvec4
	 */
	Class<bvec4> c_bvec4(vm);
	c_bvec4.Ctor();
	c_bvec4.Ctor<unsigned int>();
	c_bvec4.Ctor<unsigned int,unsigned int,unsigned int,unsigned int>();
	c_bvec4.Var("x", &bvec4::x);
	c_bvec4.Var("y", &bvec4::y);
	c_bvec4.Var("z", &bvec4::z);
	c_bvec4.Var("w", &bvec4::w);
	c_bvec4.Var("r", &bvec4::r);
	c_bvec4.Var("g", &bvec4::g);
	c_bvec4.Var("b", &bvec4::b);
	c_bvec4.Var("a", &bvec4::a);
	c_bvec4.Var("s", &bvec4::s);
	c_bvec4.Var("t", &bvec4::t);
	c_bvec4.Var("p", &bvec4::p);
	c_bvec4.Var("q", &bvec4::q);
	c_bvec4.GlobalFunc<bvec4 (*)(const bvec4&,const bvec4&)>(
			"_add", &detail::operator+);
	c_bvec4.GlobalFunc<bvec4 (*)(const bvec4&,const bvec4&)>(
			"_sub", &detail::operator-);
	c_bvec4.GlobalFunc<bvec4 (*)(const bvec4&,const bvec4&)>(
			"_mul", &detail::operator*);
	c_bvec4.GlobalFunc<bvec4 (*)(const bvec4&,const bvec4&)>(
			"_div", &detail::operator/);
	c_bvec4.GlobalFunc<string (*)(const bvec4&)>(
			"to_string", &to_string);
	/* [TODO] modulo operator for floats? 
	c_bvec4.GlobalFunc<bvec4 (*)(const bvec4&,const int&)>(
			"_mod", &detail::operator%);
			*/
	RootTable(vm).Bind("bvec4", c_bvec4);
}

void bind_glm_consts(HSQUIRRELVM vm)
{
	using namespace Sqrat;
	using namespace std;
	using namespace glm;

	ConstTable ct_glm(vm);
	ct_glm.Const("GLM_INFINITY", numeric_limits<float>::infinity());
	ct_glm.Const("GLM_QUIET_NAN", numeric_limits<float>::quiet_NaN());
	ct_glm.Const("GLM_SIGNALING_NAN", numeric_limits<float>::signaling_NaN());
}

void bind_glm_core_common(HSQUIRRELVM vm)
{
	using namespace Sqrat;
	using namespace std;
	using namespace glm;
	
	Class<vec2> c_vec2(vm, "vec2", false);
	Class<vec3> c_vec3(vm, "vec3", false);
	Class<vec4> c_vec4(vm, "vec4", false);
	Class<ivec2> c_ivec2(vm, "ivec2", false);
	Class<ivec3> c_ivec3(vm, "ivec3", false);
	Class<ivec4> c_ivec4(vm, "ivec4", false);
	Class<uvec2> c_uvec2(vm, "uvec2", false);
	Class<uvec3> c_uvec3(vm, "uvec3", false);
	Class<uvec4> c_uvec4(vm, "uvec4", false);

	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("abs", &glm::abs);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("abs", &glm::abs);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("abs", &glm::abs);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&)>("abs", &glm::abs);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&)>("abs", &glm::abs);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&)>("abs", &glm::abs);
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&)>("abs", &glm::abs);
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&)>("abs", &glm::abs);
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&)>("abs", &glm::abs);

	/*
	 * ceil available only for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("ceil", &glm::ceil);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("ceil", &glm::ceil);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("ceil", &glm::ceil);

	c_vec2.GlobalFunc<vec2 (*)(
			const vec2&,const float&,const float&)>( "clamp", &glm::clamp);
	c_vec3.GlobalFunc<vec3 (*)(
			const vec3&,const float&,const float&)>("clamp", &glm::clamp);
	c_vec4.GlobalFunc<vec4 (*)(
			const vec4&,const float&,const float&)>("clamp", &glm::clamp);
	c_ivec2.GlobalFunc<ivec2 (*)(
			const ivec2&,const int&,const int&)>("clamp", &glm::clamp);
	c_ivec3.GlobalFunc<ivec3 (*)(
			const ivec3&,const int&,const int&)>("clamp", &glm::clamp);
	c_ivec4.GlobalFunc<ivec4 (*)(
			const ivec4&,const int&,const int&)>("clamp", &glm::clamp);
	c_uvec2.GlobalFunc<uvec2 (*)(
			const uvec2&,const unsigned int&,const unsigned int&)>(
				"clamp", &glm::clamp);
	c_uvec3.GlobalFunc<uvec3 (*)(
			const uvec3&,const unsigned int&,const unsigned int&)>(
				"clamp", &glm::clamp);
	c_uvec4.GlobalFunc<uvec4 (*)(
			const uvec4&,const unsigned int&,const unsigned int&)>(
				"clamp", &glm::clamp);

	// ignoring: floatBitsToInt (float const &v)
	// ignoring: floatBitsToInt (vecType< float, P > const &v)
	// ignoring: floatBitsToUint (float const &v)
	// ignoring: floatBitsToUint (vecType< float, P > const &v)

	/*
	 * floor available only for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("floor", &glm::floor);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("floor", &glm::floor);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("floor", &glm::floor);


	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&,const vec2&)>(
			"fma", &glm::fma);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&,const vec3&)>(
			"fma", &glm::fma);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&,const vec4&)>(
			"fma", &glm::fma);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&,const ivec2&,const ivec2&)>(
			"fma", &glm::fma);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&,const ivec3&,const ivec3&)>(
			"fma", &glm::fma);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&,const ivec4&,const ivec4&)>(
			"fma", &glm::fma);
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&,const uvec2&,const uvec2&)>(
			"fma", &glm::fma);
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&,const uvec3&,const uvec3&)>(
			"fma", &glm::fma);
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&,const uvec4&,const uvec4&)>(
			"fma", &glm::fma);

	/*
	 * fract availble only for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("fract", &glm::fract);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("fract", &glm::fract);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("fract", &glm::fract);

	// ignoring: frexp (genType const &x, genIType &exp)
	// ignoring: intBitsToFloat (int const &v)
	// ignoring: intBitsToFloat (vecType< int, P > const &v)


	/*
	 * isinf available only for floats
	 */
	c_vec2.GlobalFunc<bvec2 (*)(const vec2&)>("isinf", &glm::isinf);
	c_vec3.GlobalFunc<bvec3 (*)(const vec3&)>("isinf", &glm::isinf);
	c_vec4.GlobalFunc<bvec4 (*)(const vec4&)>("isinf", &glm::isinf);

	/*
	 * isnan available only for floats
	 */
	c_vec2.GlobalFunc<bvec2 (*)(const vec2&)>("isnan", &glm::isnan);
	c_vec3.GlobalFunc<bvec3 (*)(const vec3&)>("isnan", &glm::isnan);
	c_vec4.GlobalFunc<bvec4 (*)(const vec4&)>("isnan", &glm::isnan);


	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>(
			"max", &glm::max);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"max", &glm::max);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>(
			"max", &glm::max);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&,const ivec2&)>(
			"max", &glm::max);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&,const ivec3&)>(
			"max", &glm::max);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&,const ivec4&)>(
			"max", &glm::max);
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&,const uvec2&)>(
			"max", &glm::max);
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&,const uvec3&)>(
			"max", &glm::max);
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&,const uvec4&)>(
			"max", &glm::max);


	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>(
			"min", &glm::min);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"min", &glm::min);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>(
			"min", &glm::min);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&,const ivec2&)>(
			"min", &glm::min);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&,const ivec3&)>(
			"min", &glm::min);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&,const ivec4&)>(
			"min", &glm::min);
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&,const uvec2&)>(
			"min", &glm::min);
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&,const uvec3&)>(
			"min", &glm::min);
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&,const uvec4&)>(
			"min", &glm::min);

	// ignoring: mix (genTypeT const &x, genTypeT const &y, genTypeU const &a)


	/*
	 * mod available only for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>(
			"mod", &glm::mod);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"mod", &glm::mod);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>(
			"mod", &glm::mod);

	// ignoring: mod (genType const &x, typename genType::value_type const &y)

	/*
	 * mod available only for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,vec2&)>(
			"modf", &glm::modf);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,vec3&)>(
			"modf", &glm::modf);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,vec4&)>(
			"modf", &glm::modf);

	/*
	 * round availble only for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("round", &glm::round);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("round", &glm::round);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("round", &glm::round);

	/*
	 * roundEven availble only for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("roundEven", &glm::roundEven);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("roundEven", &glm::roundEven);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("roundEven", &glm::roundEven);


	/*
	 * sign available for floats and signed ints
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("sign", &glm::sign);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("sign", &glm::sign);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("sign", &glm::sign);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&)>("sign", &glm::sign);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&)>("sign", &glm::sign);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&)>("sign", &glm::sign);


	/*
	 * smoothstep available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&,const vec2&)>(
			"smoothstep", &glm::smoothstep);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&,const vec3&)>(
			"smoothstep", &glm::smoothstep);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&,const vec4&)>(
			"smoothstep", &glm::smoothstep);


	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>(
			"step", &glm::step);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"step", &glm::step);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>(
			"step", &glm::step);
	c_ivec2.GlobalFunc<ivec2 (*)(const ivec2&,const ivec2&)>(
			"step", &glm::step);
	c_ivec3.GlobalFunc<ivec3 (*)(const ivec3&,const ivec3&)>(
			"step", &glm::step);
	c_ivec4.GlobalFunc<ivec4 (*)(const ivec4&,const ivec4&)>(
			"step", &glm::step);
	c_uvec2.GlobalFunc<uvec2 (*)(const uvec2&,const uvec2&)>(
			"step", &glm::step);
	c_uvec3.GlobalFunc<uvec3 (*)(const uvec3&,const uvec3&)>(
			"step", &glm::step);
	c_uvec4.GlobalFunc<uvec4 (*)(const uvec4&,const uvec4&)>(
			"step", &glm::step);

	// ignoring: step (T const &edge, vecType< T, P > const &x)

	/*
	 * trunc available only for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("trunc", &glm::trunc);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("trunc", &glm::trunc);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("trunc", &glm::trunc);

	// ignoring: uintBitsToFloat(uint const &v)
	// ignoring: uintBitsToFloat(vecType< uint, P > const &v)
}

void bind_glm_core_geometric(HSQUIRRELVM vm)
{
	using namespace Sqrat;
	using namespace std;
	using namespace glm;
	
	Class<vec2> c_vec2(vm, "vec2", false);
	Class<vec3> c_vec3(vm, "vec3", false);
	Class<vec4> c_vec4(vm, "vec4", false);
	Class<ivec2> c_ivec2(vm, "ivec2", false);
	Class<ivec3> c_ivec3(vm, "ivec3", false);
	Class<ivec4> c_ivec4(vm, "ivec4", false);
	Class<uvec2> c_uvec2(vm, "uvec2", false);
	Class<uvec3> c_uvec3(vm, "uvec3", false);
	Class<uvec4> c_uvec4(vm, "uvec4", false);


	/*
	 * cross available for tvec3 only
	 */
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"cross", &glm::cross);


	/*
	 * distance available for floats only
	 */
	c_vec2.GlobalFunc<float (*)(const vec2&,const vec2&)>(
			"distance", &glm::distance);
	c_vec3.GlobalFunc<float (*)(const vec3&,const vec3&)>(
			"distance", &glm::distance);
	c_vec4.GlobalFunc<float (*)(const vec4&,const vec4&)>(
			"distance", &glm::distance);

	/*
	 * dot available for floats only
	 */
	c_vec2.GlobalFunc<float (*)(const vec2&,const vec2&)>(
			"dot", &glm::dot);
	c_vec3.GlobalFunc<float (*)(const vec3&,const vec3&)>(
			"dot", &glm::dot);
	c_vec4.GlobalFunc<float (*)(const vec4&,const vec4&)>(
			"dot", &glm::dot);

	// ignoring: dot (genType const &x, genType const &y)


	/*
	 * faceforward available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&,const vec2&)>(
			"faceforward", &glm::faceforward);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&,const vec3&)>(
			"faceforward", &glm::faceforward);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&,const vec4&)>(
			"faceforward", &glm::faceforward);


	/*
	 * length available for floats
	 */
	c_vec2.GlobalFunc<float (*)(const vec2&)>("length", &glm::length);
	c_vec3.GlobalFunc<float (*)(const vec3&)>("length", &glm::length);
	c_vec4.GlobalFunc<float (*)(const vec4&)>("length", &glm::length);

	/*
	 * normalize available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("normalize", &glm::normalize);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("normalize", &glm::normalize);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("normalize", &glm::normalize);


	/*
	 * reflect available for floats only
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>(
			"reflect", &glm::reflect);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>(
			"reflect", &glm::reflect);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>(
			"reflect", &glm::reflect);

	/*
	 * refract available for floats only
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&,const float&)>(
			"refract", &glm::refract);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&,const float&)>(
			"refract", &glm::refract);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&,const float&)>(
			"refract", &glm::refract);
}

void bind_glm_core_exponential(HSQUIRRELVM vm)
{
	using namespace Sqrat;
	using namespace std;
	using namespace glm;
	
	Class<vec2> c_vec2(vm, "vec2", false);
	Class<vec3> c_vec3(vm, "vec3", false);
	Class<vec4> c_vec4(vm, "vec4", false);
	Class<ivec2> c_ivec2(vm, "ivec2", false);
	Class<ivec3> c_ivec3(vm, "ivec3", false);
	Class<ivec4> c_ivec4(vm, "ivec4", false);
	Class<uvec2> c_uvec2(vm, "uvec2", false);
	Class<uvec3> c_uvec3(vm, "uvec3", false);
	Class<uvec4> c_uvec4(vm, "uvec4", false);


	/*
	 * exp available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("exp", &glm::exp);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("exp", &glm::exp);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("exp", &glm::exp);

	/*
	 * exp2 available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("exp2", &glm::exp2);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("exp2", &glm::exp2);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("exp2", &glm::exp2);


	/*
	 * inversesqrt available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("inversesqrt", &glm::inversesqrt);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("inversesqrt", &glm::inversesqrt);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("inversesqrt", &glm::inversesqrt);


	/*
	 * log available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("log", &glm::log);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("log", &glm::log);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("log", &glm::log);

	/*
	 * log2 available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("log2", &glm::log2);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("log2", &glm::log2);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("log2", &glm::log2);


	/*
	 * pow available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&,const vec2&)>("pow", &glm::pow);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&,const vec3&)>("pow", &glm::pow);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&,const vec4&)>("pow", &glm::pow);

	/*
	 * sqrt available for floats
	 */
	c_vec2.GlobalFunc<vec2 (*)(const vec2&)>("sqrt", &glm::sqrt);
	c_vec3.GlobalFunc<vec3 (*)(const vec3&)>("sqrt", &glm::sqrt);
	c_vec4.GlobalFunc<vec4 (*)(const vec4&)>("sqrt", &glm::sqrt);
}

static std::string to_string(const glm::vec2& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ")";
}
static std::string to_string(const glm::vec3& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ","
		+ std::to_string(kV.z) + ")";
}

static std::string to_string(const glm::vec4& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ","
		+ std::to_string(kV.z) + ","
		+ std::to_string(kV.w) + ")";
}

static std::string to_string(const glm::ivec2& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ")";
}
static std::string to_string(const glm::ivec3& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ","
		+ std::to_string(kV.z) + ")";
}

static std::string to_string(const glm::ivec4& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ","
		+ std::to_string(kV.z) + ","
		+ std::to_string(kV.w) + ")";
}
static std::string to_string(const glm::uvec2& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ")";
}
static std::string to_string(const glm::uvec3& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ","
		+ std::to_string(kV.z) + ")";
}

static std::string to_string(const glm::uvec4& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ","
		+ std::to_string(kV.z) + ","
		+ std::to_string(kV.w) + ")";
}
static std::string to_string(const glm::bvec2& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ")";
}
static std::string to_string(const glm::bvec3& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ","
		+ std::to_string(kV.z) + ")";
}

static std::string to_string(const glm::bvec4& kV)
{
	return "("
		+ std::to_string(kV.x) + ","
		+ std::to_string(kV.y) + ","
		+ std::to_string(kV.z) + ","
		+ std::to_string(kV.w) + ")";
}
