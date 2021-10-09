#include "main.h"

/**
*_isdigit - prints the alphabet, upercase,
*@c: variable
*Return: 0
*/
int _isdigit(int c)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
