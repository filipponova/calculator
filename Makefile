all:
	rm -f src/main
	gcc -o bin/main src/main.c

run:
	./bin/main
	

clean:
	rm -f bin/main