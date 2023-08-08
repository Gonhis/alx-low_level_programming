#include "main.h"
/**
* read_textfile - function that reads a text file and prints
* it to the POSIX standard output
*
* @filename: file name to be read
* @letters: number of characters to be read
*
* Return: actual number of bytes read and printed 0 when function fails
* or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ismail;

	ssize_t descript, nbw, nbR;

	descript = open(filename, O_RDONLY);
	if (descript == -1)
	{
		return (0);
	}
	ismail = malloc(sizeof(char) * letters);
	nbR = read(descript, ismail, letters);
	nbw = write(STDOUT_FILENO, ismail, nbR);

	free(ismail);
	close(descript);

	return (nbw);
}
