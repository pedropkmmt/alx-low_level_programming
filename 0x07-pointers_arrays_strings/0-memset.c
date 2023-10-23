#include "main.h"
/**
 * _memset - fills n bytes of memory
 * @s: memory to be filled
 * @b: char to copy
 * @n: number
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
