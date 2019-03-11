objects:=*.out *.o
cflags:=-Wall -W -O2

filter_demo: filter_demo.cc
	g++ -o filter_demo.out -std=c++11 -Wall -W -O2 filter_demo.cc
copy_ios: copy_ios.cc
	g++ -o copy_ios.out -std=c++11 -Wall -W -O2 copy_ios.cc
copy_file: copy_file.cc
	g++ -o copy_file.out -std=c++11 -Wall -W -O2 copy_file.cc


.PHONY: clean
clean:
	-rm edit ${object}
	echo Clean done

