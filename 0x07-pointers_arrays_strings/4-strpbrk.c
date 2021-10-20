#include "main.h"
#include <stdio.h>
/**
* _strpbrk - toupper.
* @s: variable
* @accept: variable
* Return: (data)
*/
char *_strpbrk(char *s, char *accept)
{
	int i, x = 0;
	char ult;
	int f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)

		{
			if (s[i] == accept[x])
			{
				f = 1;
				s = &s[i];
				break;
			}
		}
		if (f == 1)
		{
			break;
		}
	}
}
