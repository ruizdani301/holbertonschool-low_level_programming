#include "main.h"

/**
*_isalpha -  compare, in lowercase,
*@c: variable
*Return: 0
*/

int _isalpha(int c)
{
	if (isalpha (c))
	
	/*if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
