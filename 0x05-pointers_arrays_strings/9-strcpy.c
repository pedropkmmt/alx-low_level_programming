#include "main.h"
/**
 * char *_strcpy - copies the string pointed
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int I = 0;
	int k = 0;

	while (*(src + 1) != '\0')
	{
		I++;
	}
	for (; k < I; k++)
	{
		dest[k] = src[k];
	}
	dest[I] = '\0';
	return (dest);
}
