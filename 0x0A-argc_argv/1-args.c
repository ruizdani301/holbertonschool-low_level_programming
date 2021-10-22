#include <stdio.h>
/**
 * main - parameters main
 * @argc:variable
 * @argv: variable
 * Return: Always Data.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	while (argc != 1)
	{
		argc--;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
