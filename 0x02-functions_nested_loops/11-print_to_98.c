1./*
2.* File: 11-print_to_98.c
3.* Auth: kevin odo
4.*/
5.
6.#include <stdio.h>
7.
8./**
9.* print_to_98 - Prints all natural numbers from input to 98,
10.* in order separated by a comma followed by a space.
11.* @n: The number to begin counting at.
12.*/
13.void print_to_98(int n)
14.{
15.	if (n >= 98)
16.	{
17.		while (n > 98)
18.			printf("%d, ", n--);
19.		printf("%d\n", n);
20.	}
21.
22.	else
23.	{
24.		while (n < 98)
25.			printf("%d, ", n++);
26.		printf("%d\n", n);
27.	}
28. }
