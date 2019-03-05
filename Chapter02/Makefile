objects:=*.out *.o
cflags:=-Wall -W -O2

fibon: fibon.cc
	g++ -o fibon.out -std=c++11 -Wall -W -O2 fibon.cc
bubble: bubble.cc NumericSeq.h
	g++ -o bubble.out -std=c++11 -Wall -W -O2 bubble.cc
Ex2_2: Ex2_2.cc 
	g++ -o Ex2_2.out -std=c++11 -Wall -W -O2 Ex2_2.cc
Ex2_3: Ex2_3.cc 
	g++ -o Ex2_3.out -std=c++11 -Wall -W -O2 Ex2_3.cc
Ex2_6: Ex2_6.cc 
	g++ -o Ex2_6.out -Wall -W -O2 Ex2_6.cc


.PHONY: clean
clean:
	-rm edit ${object}
	echo Clean done

