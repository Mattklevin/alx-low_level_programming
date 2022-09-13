1. /*
2. * File: 6-abs.c
3. * Auth: kevin odo
4. */
5. 
6. #include "holberton.h"
7.
8. /**
9. * _abs - Computes the absolute value of an integer.
10. * @n: The integer to be computed.
11. *
12. * Return: The absolute value of the integer.
13. */
14. int _abs(int n)
15. {
16.	if (n >= 0)
17. 		return (n);
18.	else
19.		return (-n);
20. }
