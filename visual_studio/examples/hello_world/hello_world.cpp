// hello_world.cpp : Defines the entry point for the console application.
//
#include "cg_base.h"

int main()
{
	auto mainWnd = cgb::context().create_window();
	auto hello = cgb::composition<cgb::fixed_update_timer>({
			&mainWnd 
		}, {

		});
	hello.start();

#ifdef _DEBUG
	std::cout << std::endl << "Press any key to continue ..." << std::endl;
	std::cin.get();
#endif
}

