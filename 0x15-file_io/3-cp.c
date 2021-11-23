#include "main.h"

/**
 * main -  main
 * @argc: Counter
 * @argv: Data
 * Return: int
 */

int main(int argc, char *argv[])
{

	int d, e;
	char memo[1024];
	int r;
	int w, desc, desr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	desr = open(argv[1], O_RDONLY);
	if (desr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[1]);
		close(desr);
		exit(98);
	}
	desc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (desc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(desc);
		exit(99);
	}
	r = read(desr, memo, 1024);
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[1]);
		close(desr);
		exit(98);
	}
	while (r > 0)
	{
		w = write(desc, memo, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(desc);
			exit(99);
		}
		r = read(desr, memo, 1024);
		if (r < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[1]);
			close(desr);
			exit(98);
		}
	}
	e = close(desr);
	if (e < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", e);
		exit(100);
	}
	d = close(desc);
	if (d < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
	return (0);
}
