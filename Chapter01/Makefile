objects:=*.out *.o
cflags:=-Wall -W -O2

hello: Hello.cc
	g++ -o hello.out -Wall -W -O2 Hello.cc
Ex1_1: Ex1_1.cc
	g++ -o Ex1_1.out ${cflags} Ex1_1.cc
Ex1_3: Ex1_1.cc
	g++ -o Ex1_3.out ${cflags} Ex1_3.cc
Ex1_4: Ex1_1.cc
	g++ -o Ex1_4.out ${cflags} Ex1_4.cc
Ex1_5_1: Ex1_5_1.cc
	g++ -o Ex1_5_1.out ${cflags} Ex1_5_1.cc
Ex1_6_1: Ex1_6_1.cc
	g++ -o Ex1_6_1.out ${cflags} Ex1_6_1.cc
Ex1_7: Ex1_7.cc
	g++ -o Ex1_7.out ${cflags} Ex1_7.cc


.PHONY: clean
clean:
	-rm edit ${object}
	echo Clean done

