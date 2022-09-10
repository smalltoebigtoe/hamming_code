objects = main.o parity.o conversion.o

out: $(objects)
	cc -o out $(objects)

main.o: main.c
	cc -c main.c

parity.o : parity.c parity.h
	cc -c parity.c

conversion.o : conversion.c conversion.h
	cc -c conversion.c

.PHONY : clean
clean :
	rm out $(objects)

