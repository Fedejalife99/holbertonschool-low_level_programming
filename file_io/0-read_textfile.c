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

	n = open(filename, O_RDONLY, O_CREAT, 0600);

	if (filename == NULL)
		return (0);

	if (n == -1)
		return (-1);

	buffer = malloc(letters);

	s = read(n, buffer, letters);

	if (s == -1)
	{
		return (-1);
		free(buffer);
	}
	w = write(1, buffer, s);
	if (w == -1)
		return (0);

	close(n);
	return (w);

}
