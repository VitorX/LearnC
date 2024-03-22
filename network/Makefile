default: testwinet testwinhttp

testwinet: testwinet.c
	g++ $^ -o $@ -lwininet -DUNICODE -municode

testwinhttp: testwinhttp.c
	g++ $^ -o $@ -lwinhttp -municode

clean:
	rm -f testwinhttp.exe testwinet.exe 