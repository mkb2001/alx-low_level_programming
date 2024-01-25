#include "function_pointers.h"

/**
* get_op_func -  function that selects the correct
*                  function to perform the operation asked by the user
* @s: the operator passed as argument to the program
* Return: the result
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].h)
	{
		if (strcmp(ops[i], s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
