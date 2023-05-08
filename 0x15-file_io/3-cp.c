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
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
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

/**
 * main - program that copies the contents of a file to another file.
 *
 * @argc: The number of arguments in the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0
 *
 * Description: if the number of argument is not the correct one,exit code 97
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int ff, a, r, w;

	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = new_buff(argv[2]);
	ff = open(argv[1], O_RDONLY);
	r = read(ff, buffer, 1024);
	a = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (ff == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(a, buffer, r);
		if (a == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(ff, buffer, 1024);
		a = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(ff);
	close_file(a);
	return (0);
}
