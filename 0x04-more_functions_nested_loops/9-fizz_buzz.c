#include <stdio.h>
/**
 * main - prints numbers form 1 to 100
 * Return: Always 0
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 ==0))
			printf("%d","FizzBuzz");
		else if (i % 3 == 0)
			printf("%d", "Fizz");
		else if (i % 5 == 0)
			printf("%d", "Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
