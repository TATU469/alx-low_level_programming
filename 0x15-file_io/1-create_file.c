#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file and writes to it.
 * @filename: Name of the file to create.
 * @text_content:NULL terminated string.
 *
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, bytes_written;
	mode_t file_permissions = S_IRUSR | S_IWUSR;
	size_t text_size = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[text_size])
			text_size++;
	}
	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
	if (file_desc == -1)
		return (-1);
	if (text_content)
	{
		bytes_written = write(file_desc, text_content, text_size);
		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}

