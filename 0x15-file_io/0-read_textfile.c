#include "main.h"

/**
 * read_textfile -   reads a text file and prints standar output,
 * @filename: pointer
 * @letters: variable
 * Return: data
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int des;
	int r;
	int w;
	char *memo;

	if (filename == NULL)
		return (0);
	des = open(filename, O_RDONLY);
	memo = malloc(sizeof(char) * letters);
	if (memo == NULL)
		return (0);
	r = read(des, memo, letters);
	if (r < 0)
	{
		free(memo);
		return (0);
	}
	close(des);
	w = write(STDOUT_FILENO, memo, r);
	if (w < 0)
	{
		free(memo);
		return (0);
	}
	free(memo);
	return (w);
}
