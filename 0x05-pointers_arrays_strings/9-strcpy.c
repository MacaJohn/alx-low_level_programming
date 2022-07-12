#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;
	for (; src[i] != '\0')
		n++;
	{
		dest[i] = src[i];
	}
	return (dest);
}
