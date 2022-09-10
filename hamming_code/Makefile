objects = main.o parity.o

out: $(objects)
	cc -o out $(objects)

main.o: main.c
	cc -c main.c

parity.o : parity.c parity.h
	cc -c parity.c

.PHONY : clean
clean :
	rm out $(objects)

