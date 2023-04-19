#include "3-calc.h"
#include <stdlib.h>

/**
 * *get_op_func - Selects the correct function asked
 * by the user to perform the operation
 * @s: operator used as argument
 * Return: pointer to the function commensurate with operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int m = 0;

	while (ops[m].op != NULL && *(ops[m].op) != *s)
		m++;

	return (ops[m].f);
}
