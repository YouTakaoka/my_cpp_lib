run: a.out
	cat input.txt | ./exec.sh ./a.out

a.out: Main.cpp
	g++ -std=gnu++1y -O0 -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -o a.out Main.cpp

clean:
	rm a.out

reset:
	cat template.cpp > Main.cpp
	echo "" > input.txt

run2: a2.out
	cat input.txt | ./exec.sh ./a2.out

a2.out: Main2.cpp
	g++ -std=gnu++1y -O0 -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -o a2.out Main2.cpp

clean2:
	rm a2.out

reset2:
	cat template.cpp > Main2.cpp
	echo "" > input.txt
