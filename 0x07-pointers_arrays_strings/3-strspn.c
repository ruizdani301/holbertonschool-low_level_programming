#include "main.h"
#include <stdio.h>
/**
* _strspn- toupper.
* @accept: variable
* @s: variable
* Return: (data)
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, x, n = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				n++;
			}
			
		}

		
	}
return (n);
}
