objects:=*.out *.o
cflags:=-Wall -W -O2

fibon: fibon.cc
	g++ -o fibon.out -Wall -W -O2 fibon.cc
bubble: bubble.cc NumericSeq.h
	g++ -o bubble.out -std=c++11 -Wall -W -O2 bubble.cc


.PHONY: clean
clean:
	-rm edit ${object}
	echo Clean done

