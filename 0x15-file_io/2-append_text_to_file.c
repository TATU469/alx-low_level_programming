#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at the end.
 * @filename: Name of the file.
 * @text_content:NULL terminated string to add at the end.
 *
 * Return: 1 on success and  -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	if (!text_content)
	{
		close(file_descriptor);
		return (1);
	}
	bytes_written = write(file_descriptor, text_content, strlen(text_content));
	close(file_descriptor);
	if (bytes_written == -1)
		return (-1);
	return (1);
}

