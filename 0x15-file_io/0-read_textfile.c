#include "main.h"
#include <stdlib.h>
/**
* read_textfile - this function that reads a text file and prints
*  it to the POSIX standard output.
* @filename: this is the file to be read
* @letters: this is the number of letters to print
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w_fd, r_fd, o_fd;

	char *store;

	store = malloc(sizeof(char) * letters);

	if (store == NULL)
		return (0);



	o_fd = open(filename, O_RDONLY);
	r_fd = read(o_fd, store, letters);
	w_fd = write(STDOUT_FILENO, store, r_fd);

	if (o_fd == -1 || r_fd == -1 || w_fd == -1 || w_fd != r_fd)
	{
		free(store);
		return (0);
	}

	free(store);
	close(o_fd);

	return (w_fd);
}
