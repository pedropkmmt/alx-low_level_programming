#include "main.h"
/*
 * *_memcpy - copies n bytes from memory src
 * @n: copies
 * @src: bytes
 * @dest: memory
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);

}
