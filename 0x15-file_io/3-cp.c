#include "main.h"

/**
 * cases - cases
 * @argv: array
 */
void cases(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);
}
/**
 * case_desc - case_desc
 * @argv: array
 */
void case_desc(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
	exit(99);
}
/**
 * case_clos - case e
 * @e: data
 */
void case_clos(int e)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", e);
	exit(100);
}
/**
 * main -  main
 * @argc: Counter
 * @argv: array
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
		cases(argv[1]);
	desc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (desc < 0)
		case_desc(argv[2]);
	r = read(desr, memo, 1024);
	if (r < 0)
		cases(argv[1]);
	while (r > 0)
	{
		w = write(desc, memo, r);
		if (w != r)
		{
			case_desc(argv[2]);
		}
		r = read(desr, memo, 1024);
		if (r < 0)
		{
			cases(argv[1]);
		}
	}
	e = close(desr);
	if (e < 0)
		case_clos(e);
	d = close(desc);
	if (d < 0)
		case_clos(d);
	return (0);
}
