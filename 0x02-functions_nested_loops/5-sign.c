1. /*
2. * File: 5-sign.c
3. * Auth: Muhammed Abdulrahaman Adinoyi
4. */
5. 
6. #include "holberton.h"
7.
8. /**
9. * print_sign - Prints the sign of a number.
10.* @n: The number of which the sign will be printed.
11. *
12. * Return: 1 if the number is greater than zero,
13. *         0 if the number is zero,
14. *         -1 if the number is less than zero.
15.*/
16. int print_sign(int n)
17. {
18. 	if (n > 0)
19.	{
20.		_putchar('+');
21.		return (1);
22.	}
23.	else if (n == 0)
24.	{
25.		_putchar('0');
26.		return (0);
27.	}
28.	else
29.	{
30.		_putchar('-');
31.		return (-1);
32.	}
33. }
