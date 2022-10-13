main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o caesar.o vigenere.h decrypt.h
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o 
	g++ -o test-ascii test-ascii.o

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

main.o: main.cpp caesar.h vigenere.h decrypt.h

tests.o: tests.cpp doctest.h caesar.h vigenere.h decrypt.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o tests.o test-ascii.o caesar.o vigenere.o decrypt.o
