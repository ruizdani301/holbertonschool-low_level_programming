#include "main.h"
/**
* cap_string - toupper.
* @n: variable
* Return: (data)
*/
char *cap_string(char *n)
{
	char b[] = "' '\t\n,;.!?\"(){}";
	int i = 0;
	int x = 0;

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
