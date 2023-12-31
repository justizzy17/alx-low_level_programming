#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * @s:  operator passed as argument to the program
 * Return: integer
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

    for (i = 0; ops[i].op; i++)
    {
	    if (*s == *(ops[i].op) && s[1] == '\0')
		    return (ops[i].f);
    }

    return (NULL);
}
