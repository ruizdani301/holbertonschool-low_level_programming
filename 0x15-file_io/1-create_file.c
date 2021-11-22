#include "main.h"
/**
 * create_file -  creat file
 * @filename: variable
 * @text_content: variable
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int des;
	int r = 0;

	if (filename == NULL)
		return (-1);
	des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (des < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		write(des, text_content, 0);
	}
	else
	{
		while (text_content[r] != '\0')
			r++;
		write(des, text_content, r);
	}
	close(des);
	return (1);
}
