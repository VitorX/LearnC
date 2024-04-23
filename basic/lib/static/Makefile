lib_mylib:lib_mylib.c
	$(CC) -c $^ -o $@.o
	ar rcs lib_mylib.a lib_mylib.o
driver:driver.c lib_mylib
	$(CC) -c driver.c -o $@.o
	$(CC) -o $@ $@.o -L . lib_mylib.a
clean:
	rm *.o *.a driver
