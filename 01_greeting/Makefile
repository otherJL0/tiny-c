CC = clang
CFLAGS = `cat compile_flags.txt`

run: compile
	./greeting

compile: clean
	$(CC) $(CFLAGS) -o greeting greeting.c

clean:
	rm ./greeting
