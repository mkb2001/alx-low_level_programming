#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o_fd, r_fd, w_fd, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	o_fd = open(filename, O_APPEND | O_WRONLY);
	w_fd = write(o_fd, filename, i);

	if (o_fd == -1 || w_fd == -1)
	{
		return (-1);
	}
	close(o_fd);

	return (1);

}
