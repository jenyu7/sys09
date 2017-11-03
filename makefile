all:
	gcc -o sys09 run.c

run: all
	./sys09

clean:
	rm *~ sys09
