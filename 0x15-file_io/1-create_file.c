#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t baba = 0, mama = 0, j = 0;

	if (!filename)
		return (-1);

	if (text_content)
		text_content = "";

	baba = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (baba < 0)
		return (-1);

	while (text_content[j])
		j++;
	mama = write(baba, text_content, j);
	if (mama < 0)
		return (-1);

	close(baba);
	return (1);
}
