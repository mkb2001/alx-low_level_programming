#include "main.h"

char *get_store(char *file);

/**
 * get_store - This creates a buffer callled a store
 * @file: this is the name of the file to create>
 * Return: this is apointer to a buffer
*/
char *get_store(char *file)
{
    char *store;

    store =malloc(sizeof(char) * 1024);

    if (store == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s", file);
        exit(99);
    }

    return (store);
}


/**
* main - this copies fromone file to another
* @argc: This is the number of args
* @argv:This is the array of args
* Return: if the number of argument is not the correct one,
*          exit with code 97
*/

int main(int argc, char *argv[])
{
	int res1,res2, fro_fd, w_fd, to_fd, r_fd;
    char *store, *file_to, *file_from;

	if (argc != 3)
	{
		printf("Usage: %s file_from file_to ", argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];


	if (file_from == NULL)
	{
	printf("Error: Can't read from file %s\n", file_from);
	exit(98);
	}

    store = get_store(file_to);

    fro_fd = open(file_from, O_RDONLY);
    r_fd = read(fro_fd, store, 1024);
    to_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

    do 
    {
        if (fro_fd == -1 || r_fd == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            free(store);
            exit(98);
        }

        w_fd = write(to_fd, store, r_fd);
        if (to_fd == -1 || w_fd == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            free(store);
            exit(99);
        } 

        r_fd = read(fro_fd, store, 1024);
        to_fd = open(file_to, O_WRONLY | O_APPEND);

    }while (r_fd > 0);

    free(store);
    res1 = close(fro_fd);
    res2 = close(to_fd);

    if (res1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fro_fd);
		exit(100);
    }
    if (res2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
    }
    

	return (0);
}
