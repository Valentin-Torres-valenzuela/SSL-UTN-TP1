CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: TablasDeConversion

Conversion.o: Conversion.c Conversion.h
	$(CC) $(CFLAGS) -c Conversion.c

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) $(CFLAGS) -c ConversionTest.c

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) $(CFLAGS) -c TablasDeConversion.c

TablasDeConversion: Conversion.o ConversionTest.o TablasDeConversion.o
	$(CC) $(CFLAGS) Conversion.o ConversionTest.o TablasDeConversion.o -o TablasDeConversion

clean:
	rm -f *.o TablasDeConversion
