#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: string to be searched
 * @accept: bytes to be searched
 * Return: returns pointer is conditions met
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
