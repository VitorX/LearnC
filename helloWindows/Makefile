datapro: datapro.c
	cl $^ crypt32.lib

testwmain: testwmain.c
	cl $^ 

testwinmain: testwinmain.c
	g++ $^ -o $@ -luser32 -lComctl32
clean:
	rm -f testwmain.exe testwinmain.exe testwmain.obj
