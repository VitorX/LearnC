mydll: mydll.c
	$(CC) $^ -shared -o $@
main:main.c mydll
	$(CC) $^ mydll -o $@
clean:
	rm mydll main
