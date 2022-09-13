1. /*
2. * File: 4-isalpha.c
3. * Auth: Muhammed Abdulrahaman Adinoyi
4. */
5. 
6. #include "holberton.h"
7. 
8. /**
9. * _isalpha - Checks if a character is alphabetic.
10. * @c: The character to be checked.
11. *
12. * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
13. */
14. int _isalpha(int c)
15. {
16.	if ((c >= 'a' && c <= 'z') ||
17.	    (c >= 'A' && c <= 'Z'))
18.		return (1);
19.	else
20.		return (0);
21. }
