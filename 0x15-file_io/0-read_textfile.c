#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: name of the file to read from
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t baba = 0, mama = 0;
	char *rayven;

	if (!filename | !letters)
		return (0);

	baba = open(filename, O_RDONLY);
	if (baba < 0)
		return (0);

	rayven = malloc(sizeof(char) * (letters));
	if (!rayven)
		return (0);

	mama = read(baba, rayven, letters);
	mama = write(STDOUT_FILENO, rayven, mama);
	if (mama < 0)
		return (0);

	close(baba);
	free(rayven);
	return (mama);
}
