objects:=*.out *.o
cflags:=-Wall -W -O2

filter_demo: filter_demo.cc
	g++ -o filter_demo.out -std=c++11 -Wall -W -O2 filter_demo.cc
copy_ios: copy_ios.cc
	g++ -o copy_ios.out -std=c++11 -Wall -W -O2 copy_ios.cc
copy_file: copy_file.cc
	g++ -o copy_file.out -std=c++11 -Wall -W -O2 copy_file.cc
Ex3_1: Ex3_1.cc
	g++ -o Ex3_1.out -std=c++11 -Wall -W -O2 Ex3_1.cc
Ex3_2: Ex3_2.cc
	g++ -o Ex3_2.out -std=c++11 -Wall -W -O2 Ex3_2.cc
Ex3_3: Ex3_3.cc
	g++ -o Ex3_3.out -std=c++11 -Wall -W -O2 Ex3_3.cc
Ex3_4: Ex3_4.cc
	g++ -o Ex3_4.out -std=c++11 -Wall -W -O2 Ex3_4.cc


.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done

