#include <imgui/imgui.cpp>
#include <imgui/imgui_demo.cpp>
#include <imgui/imgui_draw.cpp>
#include <imgui/imgui_tables.cpp>
#include <imgui/imgui_widgets.cpp>

#define LOGURU_IMPLEMENTATION 1
#include <loguru.hpp>

#include <emilib/imgui_helpers.cpp>
#include <emilib/imgui_sdl.cpp>
#include <emilib/timer.cpp>

#ifdef OPENGL_REFERENCE_RENDERER
	#include <emilib/gl_lib.cpp>
	#include <emilib/gl_lib_sdl.cpp>
	#include <emilib/imgui_gl_lib.cpp>
#endif
