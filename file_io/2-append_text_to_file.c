#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: txt file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);

	w = write(o, text_content, strlen(text_content));

	if (w == -1)
		return (-1);

	close(o);

	return (1);

}
