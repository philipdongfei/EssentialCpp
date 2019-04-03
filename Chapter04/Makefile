objects:=*.out *.o
cflags:=-Wall -W -O2

Stack: Stack.cc Stack.h
	g++ -o Stack.out -std=c++11 -Wall -W -O2 Stack.cc
Triangular: Triangular.h Triangular.cc Triangular_iterator.h Triangular_iterator.cc
	g++ -o Triangular.out -std=c++11 ${cflag} Triangular.cc Triangular_iterator.cc
Matrix: testmatrix.cc Matrix.h Matrix.cc
	g++ -o testmatrix.out -std=c++11 ${cflag} testmatrix.cc Matrix.cc
TestLessThan: TestLessThan.cc LessThan.cc LessThan.h
	g++ -o TestLessThan.out -std=c++11 ${cflag} TestLessThan.cc LessThan.cc LessThan.h
UserProfile: UserProfile.h UserProfile.cc
	g++ -o UserProfile.out -std=c++11 ${cflag} UserProfile.cc
Matrix4: Matrix4.h Matrix4.cc
	g++ -o Matrix4.out -std=c++11 ${cflag} Matrix4.cc
.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done

