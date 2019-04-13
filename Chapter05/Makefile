objects:=*.out *.o
cflags:=-Wall -W -O2

TestLibMat: TestLibMat.cc LibMat.h
	g++ -o TestLibMat.out -std=c++11 ${cflags} TestLibMat.cc
TestFibo: TestFibo.cc Fibonacci.cc num_sequence.cc
	g++ -o TestFibo.out -std=c++11 ${cflags} TestFibo.cc Fibonacci.cc num_sequence.cc
TestStack: TestStack.cc Stack.cc Stack.h
	g++ -o TestStack.out -std=c++11 ${cflags} TestStack.cc Stack.h Stack.cc


.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done

