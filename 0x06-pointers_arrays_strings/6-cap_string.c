#include "main.h"
#include <stdio.h>
/**
* cap_string - toupper.
* @n: variable
* Return: (data)
*/
char *cap_string(char *n)
{
	char b[] = " \t\n,;.!?\"(){}";
	/*char b[] = {'"','\n',';','.','!','?','\\','(',')','{','}',' '};*/
	int i = 0;
	int x = 0;

	if (n[0] <= 'z' && n[0] >= 'a')
	{
		n[0] = n[0] - 32;
	}
	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; b[x] != '\0'; x++)
		{
			if (n[i] == b[x])
			{
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] = n[i + 1] - 32;
				}
			}
		}
	}
	return (n);
}
