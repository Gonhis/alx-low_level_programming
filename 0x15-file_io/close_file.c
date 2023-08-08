#include "main.h"

char *new_buff(char *file);
void close_file(int descrip);

/**
* new_buff - Allocates 1024 bytes for a buffer.
*
* @file: The name of the file buffer
*
* Return: A pointer to the newly-allocated buffer.
*/
char *new_buff(char *file)
{
	char *doc;

	doc = malloc(sizeof(char) * 1024);
	if (doc == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (doc);
}
/**
* close_file - Closes file descriptors.
*
* @descrip: The file descriptor to be closed.
*
* Return: empty
*/
void close_file(int descrip)
{
	int is;

	is = close(descrip);

	if (is == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close descrip %d\n", descrip);
		exit(100);
	}
}
