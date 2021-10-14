#include "main.h"

/**
* _strcmp - compares two strings.
* @s1:variable
* @s2:variable
* Return: (data)
*/
int _strcmp(char *s1, char *s2)
{
	char *ptr1 = s1;
	char *ptr2 = s2;
	int i = 0;
	int j = 0;

	while (*ptr1 != '\0')
	{
		ptr1++;
		i++;
	}
	while (*ptr2 != '\0')
	{
		ptr2++;
		j++;
	}
	if (j > i)
	{
		return (j *= (-1));
	}
	if (i > j)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
