CC = gcc
test : f1.c f2.c
	gcc -o test f1.c f2.c
clean :
	rm -f test
