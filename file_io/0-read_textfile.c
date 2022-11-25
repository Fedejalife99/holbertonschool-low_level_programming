#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: txt file
 * @letters: size of filename
 * Return: w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n, s, w;

	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	n = open(filename, O_RDONLY, O_CREAT, 0600);
	s = read(n, buffer, letters);
	w = write(STDOUT_FILENO, buffer, s);

	if (w == -1 || r == -1 || n == -1)
	{
		free(buffer);
		return (0);
	}
	close(n);
	return (w);
}
