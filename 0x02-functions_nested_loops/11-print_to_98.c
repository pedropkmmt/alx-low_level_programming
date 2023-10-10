#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from 98
 * @n: starting point
 * Return: returns 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
					break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
