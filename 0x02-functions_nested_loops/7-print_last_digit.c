1./*
2.* File: 7-print_last_digit.c
3.* Auth: kevin odo
4.*/
5.
6.#include "holberton.h"
7.
8./**
9.* print_last_digit - Prints the last digit of a number.
10.* @n: The number in question.
11.*
12.* Return: Value of the last digit.
13.*/
14.int print_last_digit(int n)
15.{
16.	int last_digit = n % 10;
17.
18.	if (last_digit < 0)
19.		last_digit *= -1;
20.
21.	_putchar(last_digit + '0');
22.
23.	return (last_digit);
24. }
