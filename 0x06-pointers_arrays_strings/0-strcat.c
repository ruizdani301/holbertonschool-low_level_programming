#include "main.h"
/**
* _strcat - print array
* @dest:s1
* @src:s2
* Return: string dest
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
