1. /*
2. * File: 1-alphabet.c
3. * Auth: kevin odo
4. */
5. #include "holberton.h"
6. /**
7. * print_alphabet - prints the alphabet in lowercase, followed by a new line.
8. */
9. void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
