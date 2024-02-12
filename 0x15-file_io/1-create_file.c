#include "main.h"
/**
* create_file - function that creates a file.
* @filename: is the nameof the file to create
* @text_content:is the NULL terminated string to write a file
* Return: 1 on success, -1 on failure (file can not be created,
* file can not be written, write “fails”, etc…)
*
*/
int create_file(const char *filename, char *text_content)
{
	int o_fd, w_fd, i;

	i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}


	o_fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	w_fd = write(o_fd, text_content, i);

	if (w_fd == -1 || o_fd == -1)
		return (-1);

	close(o_fd);

	return (1);


}
