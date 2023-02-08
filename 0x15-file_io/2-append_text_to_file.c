#include "main.h"

/**
 * append_text_to_file - This function adds text at EOF
 * @filename: name of the file to append data to.
 * @text_content: data to append to file
 * Return: 1 if succesfull else -1 on err
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int baba = 0, mama = 0, j = 0;

	if (!filename)
		return (-1);

	baba = open(filename, O_WRONLY | O_APPEND);
	if (baba < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;

		mama = write(baba, text_content, j);
		if (mama < 0)
			return (-1);
	}
	close(baba);
	return (-1);
}
