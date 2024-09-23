$(warning please compile the program using Developer command Prompt for VS instead of using makefile)
default: lib_link_input_2.cpp lib_link_input_1
	cl /EHsc lib_link_input_1.lib lib_link_input_2.cpp
lib_link_input_1: lib_link_input_1.cpp
	cl /LD lib_link_input_1.cpp
clean:
	rm -f *.dll *.exp *.lib *.obj *.exe
