1. /*
2. * File: 101-natural.c
3. * Auth: kevin odo
4. */
5.
6. #include <stdio.h>
7. /**
8. * main - Lists all the natural numbers below 1024 (excluded)
9. * that are multiples of 3 or 5.
10.*
11. * Return: Always 0.
12. */
13. int main(void)
14. {
15.	int i, sum = 0;
16.
17.	for (i = 0; i < 1024; i++)
18.	{
19.		if ((i % 3) == 0 || (i % 5) == 0)
20.			sum += i;
21.	}
22.	printf("%d\n", sum);
23.	return (0);
24. }
25. Footer
