CC:=gcc -Wall -Werror -Wextra
NORM:=C:\Users\sketsri\Anaconda3\Scripts\norminette

all: rush00 rush01 rush02 rush03 rush04


cleanall: clean
	$(RM) rush00 rush01 rush02 rush03 rush04 *_output.txt

clean:
	$(RM) *.o *~ .*~ core

norm: *.c
	$(NORM) $?

test: rush00 rush01 rush02 rush03 rush04
	rush00 > rush00_output.txt
	rush01 > rush01_output.txt
	rush02 > rush02_output.txt
	rush03 > rush03_output.txt
	rush04 > rush04_output.txt

rush00: main.o ft_putchar.o rush00.o
	$(CC) main.o ft_putchar.o rush00.o -o rush00

rush01: main.o ft_putchar.o rush01.o
	$(CC) main.o ft_putchar.o rush01.o -o rush01

rush02: main.o ft_putchar.o rush02.o
	$(CC) main.o ft_putchar.o rush02.o -o rush02

rush03: main.o ft_putchar.o rush03.o
	$(CC) main.o ft_putchar.o rush03.o -o rush03

rush04: main.o ft_putchar.o rush04.o
	$(CC) main.o ft_putchar.o rush04.o -o rush04

main.o: main.c
	$(CC) -c main.c

ft_putchar.o:	ft_putchar.c
	$(CC) -c ft_putchar.c

rush00.o: rush00.c
	$(CC) -c rush00.c

rush01.o: rush01.c
	$(CC) -c rush01.c

rush02.o: rush02.c
	$(CC) -c rush02.c

rush03.o: rush03.c
	$(CC) -c rush03.c

rush04.o: rush04.c
	$(CC) -c rush04.c