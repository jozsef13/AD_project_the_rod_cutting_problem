all: rodcutting

rodcutting: main.o common_functions.o first_algorithm.o second_algorithm.o
	gcc main.o common_functions.o first_algorithm.o second_algorithm.o -o rodcutting

main.o: main.c
	gcc -c main.c

common_functions.o: common_functions.c
	gcc -c common_functions.c

first_algorithm.o: first_algorithm.c
	gcc -c first_algorithm.c

second_algorithm.o: second_algorithm.c
	gcc -c second_algorithm.c

clean:
	rm *o rodcutting
