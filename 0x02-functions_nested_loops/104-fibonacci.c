1. /*
2. * File: 104-fibonacci.c
3. * Auth: kevin odo
4. */
5. #include <stdio.h>
6. /**
7. * main - Prints the first 98 Fibonacci numbers, starting with
8. *        1 and 2, separated by a comma followed by a space.
9. *
10.* Return: Always 0.
11. */
12. int main(void)
13. {
14.	int count;
15.	unsigned long fib1 = 0, fib2 = 1, sum;
16.	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
17.	unsigned long half1, half2;
18.
19.	for (count = 0; count < 92; count++)
20.	{
21.		sum = fib1 + fib2;
22.		printf("%lu, ", sum);
23.
24.		fib1 = fib2;
25.		fib2 = sum;
26.	}
27.
28.	fib1_half1 = fib1 / 10000000000;
29.	fib2_half1 = fib2 / 10000000000;
30.	fib1_half2 = fib1 % 10000000000;
31.	fib2_half2 = fib2 % 10000000000;
32.
33.	for (count = 93; count < 99; count++)
34.	{
35.		half1 = fib1_half1 + fib2_half1;
36.		half2 = fib1_half2 + fib2_half2;
37.		if (fib1_half2 + fib2_half2 > 9999999999)
38.		{
39.			half1 += 1;
40.			half2 %= 10000000000;
41.		}
42.
43.		printf("%lu%lu", half1, half2);
44.		if (count != 98)
45.			printf(", ");
46.
47.		fib1_half1 = fib2_half1;
48.		fib1_half2 = fib2_half2;
49.		fib2_half1 = half1;
50.		fib2_half2 = half2;
51.	}
52.	printf("\n");
53.	return (0);
54. }
55. Footer
