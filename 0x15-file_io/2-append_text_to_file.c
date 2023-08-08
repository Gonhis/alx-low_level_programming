#include "main.h"
/**
* append_text_to_file - function that appends text at the end of a file.
*
* @filename: name of the file to be modifie
* @text_content: content to add to the end of the file.
*
* Return: -1 or 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int descr, nbw, lenght = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[lenght])
			lenght++;
	}
	descr = open(filename, O_WRONLY | O_APPEND);
	nbw = write(descr, text_content, lenght);

	if (descr == -1 || nbw == -1)
	{
		return (-1);
	}
	close(descr);

	return (1);
}
