
1. /*
2. * File: 2-print_alphabet_x10.c
3. * Auth: kevin odo
4. */

5. #include "main.h"

6. /**
7. * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
8. */
9. void print_alphabet_x10(void)
10. {
11. 	int count = 0;
12. 	char letter;

13. 	while (count++ <= 9)
14. 	{
15. 		for (letter = 'a'; letter <= 'z'; letter++)
16. 			_putchar(letter);
17. 		_putchar('\n');
18.	}
19. }
20. Footer
