#include "main.h"
/**
* *string_toupper - toupper.
* @n: variable
* Return: (data)
*/
char *string_toupper(char *n)
{
	int i;
	int b;   

	for (i = 0; n[i] != '\0'; i++)
	{
		for (b = 'a'; b <= 'z' ; b++)
		{
			if (n[i] == b)
			{
				n[i] = n[i] - 32 ;
				break;
			}
		}
	}
	return (n);
}
