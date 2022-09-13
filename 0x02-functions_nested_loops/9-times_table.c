1./*
2.* File: 9-times_table.c
3.* Auth: Muhammed Abdulrahaman Adinoyi
4.*/
5.
6.#include "holberton.h"
7.
8./**
9.* times_table - Prints the 9 times table, starting with 0.
10.*/
11.void times_table(void)
12.{
13.	int num, mult, prod;
14.
15.	for (num = 0; num <= 9; num++)
16.	{
17.		_putchar('0');
18.
19.		for (mult = 1; mult <= 9; mult++)
20.		{
21.			_putchar(',');
22.			_putchar(' ');
23.
24.			prod = num * mult;
25.
26.			if (prod <= 9)
27.				_putchar(' ');
28.			else
29.				_putchar((prod / 10) + '0');
30.
31.			_putchar((prod % 10) + '0');
32.		}
33.		_putchar('\n');
34.	}
35. }
