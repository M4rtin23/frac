all: frac

frac: main.c
	gcc main.c -o frac

install: frac
	cp frac /usr/local/bin

uninstall:
	rm -f /usr/local/bin/frac

clean:
	rm -f frac
