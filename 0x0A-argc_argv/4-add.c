#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * print 0 if no number is passed to the program , followed by a new line
 * print error, if  number contains symbols, followed by a new line, return 1
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, i, sum;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= 48 && argv[i][j] <= 57)
				{
					break;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
