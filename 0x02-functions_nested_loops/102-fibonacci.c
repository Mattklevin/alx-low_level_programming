1. /*
2. * File: 102-fibonacci.c
3. * Auth: Muhammed Abdulrahaman Adinoyi
4. */
5. #include <stdio.h>
6. /**
7. * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
8. * separated by a comma followed by a space.
9. *
10. * Return: Always 0.
11. */
12. int main(void)
13. {
14.	int count;
15.	unsigned long fib1 = 0, fib2 = 1, sum;
16.
17.	for (count = 0; count < 50; count++)
18.	{
19.		sum = fib1 + fib2;
20.		printf("%lu", sum);
21.
22.		fib1 = fib2;
23.		fib2 = sum;
24.
25.		if (count == 49)
26.			printf("\n");
27.		else
28.			printf(", ");
29.	}
30.	return (0);
31. }
