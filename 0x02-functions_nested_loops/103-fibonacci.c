1. /*
2. * File: 103-fibonacci.c
3. * Auth: Muhammed Abdulrahaman Adinoyi
4. */
5. #include <stdio.h>
6. /**
7. * main - Prints the sum of even-valued Fibonacci sequence
8. * terms not exceeding 4000000.
9. *
10. * Return: Always 0.
11. */
12. int main(void)
13. {
14.	unsigned long fib1 = 0, fib2 = 1, fibsum;
15.	float tot_sum;
16.
17.	while (1)
18.	{
19.		fibsum = fib1 + fib2;
20.		if (fibsum > 4000000)
21.			break;
22.		if ((fibsum % 2) == 0)
23.			tot_sum += fibsum;
24.
25.		fib1 = fib2;
26.		fib2 = fibsum;
27.	}
28.	printf("%.0f\n", tot_sum);
29.	return (0);
30. }
