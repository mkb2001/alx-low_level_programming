#include "main.h"
#include <stdlib.h>

/**
* argstostr - function that concatenates all
* the arguments of your program.
* @ac: the number of the argument
* @av: the array of strings.
* Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, size;

    k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	ptr = malloc((sizeof(char) * size) + 1);

	if (ptr == NULL)
		return (0);
        
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			j++;
			k++;
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	ptr[k] = '\0';
	return (ptr);



}