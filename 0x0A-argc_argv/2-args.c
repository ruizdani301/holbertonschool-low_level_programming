#include <stdio.h>
/**
 * main - parameters main
 * @argc:variable
 * @argv: variable
 * Return: Always Data.
 */
int main(int argc, char *argv[])
{
	while (argc != 0)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	return (0);
}
