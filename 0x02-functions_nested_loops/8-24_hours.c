1./*
2.* File: 8-24_hours.c
3.* Auth: Muhammed Abdulrahaman Adinoyi
4.*/
5.
6.#include "holberton.h"
7.
8./**
9.* jack_bauer - Prints every minute of the day of
10.*              Jack Bauer, starting from 00:00 to 23:59.
11.*/
12.void jack_bauer(void)
13.{
14.	int hour, minute;
15.
16.	for (hour = 0; hour <= 23; hour++)
17.	{
18.		for (minute = 0; minute <= 59; minute++)
19.		{
20.			_putchar((hour / 10) + '0');
21.			_putchar((hour % 10) + '0');
22.			_putchar(':');
23.			_putchar((minute / 10) + '0');
24.			_putchar((minute % 10) + '0');
25.			_putchar('\n');
26.		}
27.	}
28. }
