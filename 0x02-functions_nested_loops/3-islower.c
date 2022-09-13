1. /*
2. * File: 3-islower.c
3. * Auth: kevin odo
4. */
5. 
6. #include "holberton.h"
7. 
8. /**
9. * _islower - Checks if a character is lowercase.
10. * @c: The character to be checked.
11. *
12. * Return: 1 if character is lowercase, 0 otherwise.
13. */
14. int _islower(int c)
15. {
16. 	if (c >= 'a' && c <= 'z')
17.		return (1);
18.	else
19.		return (0);
20. }
