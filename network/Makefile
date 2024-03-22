default: testwininet testwinhttp

testwininet: testwininet.c
	g++ $^ -o $@ -lwininet -DUNICODE -municode

testwinhttp: testwinhttp.c
	g++ $^ -o $@ -lwinhttp -municode

clean:
	rm -f testwinhttp.exe testwininet.exe 