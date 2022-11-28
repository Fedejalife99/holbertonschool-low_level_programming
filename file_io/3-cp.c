#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - funtion cp
 * @argc: number of arguments
 * @argv: pointer to an array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *buffer;

	int desde;

	int hasta;

	int r;

	int w;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
		return (97);

	if (argc < 3)
	{
		printf("Usage: cp file_from file_to\n");
		return (97);
	}
	desde = open(argv[1], O_RDONLY);
	hasta = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0700);
	r = read(desde, buffer, sizeof(buffer));
	w = write(hasta, buffer, r);
	if (desde == -1)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE\n");
		return (98);
	}
	if (w == -1 || hasta == -1)
	{
		free(buffer);
		printf("Error: Can't write to NAME_OF_THE_FILE\n");
		return (99);
	}
	close(desde);
	close(hasta);
	return (0);
}




