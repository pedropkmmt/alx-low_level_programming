#include "main.h"
/**
 * char *_strcpy - copies the string pointed
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (*(src + 1) != '\0')
		i++;
	for (; k < i ; k++)
		dest[k] = src[k];
	dest[i] = '\0';
	return (dest);
}
