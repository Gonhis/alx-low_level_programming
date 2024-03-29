#include "main.h"
/**
* create_file - function that creates a file
*
* @filename: name of the file to create.
* @text_content: content to write to the file.
*
* Return: -1 or 1
*/
int create_file(const char *filename, char *text_content)
{
	int descr, nbw, lenght = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}
	descr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	nbw = write(descr, text_content, lenght);
	if (descr == -1 || nbw == -1)
	{
		return (-1);
	}
	close(descr);

	return (1);
}
