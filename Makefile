all:
	gcc -o bin/main src/main.c

run:
	./bin/main
	

clean:
	rm -f bin/main