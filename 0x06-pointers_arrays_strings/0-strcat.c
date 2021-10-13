#include "main.h"

/**
* _strcat - print array
* @dest:variable
* @src:variable
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[i++] = src[x];
	}
	dest[i++] = src[x];
	return (dest);
}
