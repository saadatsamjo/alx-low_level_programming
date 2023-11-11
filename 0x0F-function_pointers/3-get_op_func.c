#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Include the <string.h> header for strcmp

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument
 *
 * Return: pointer to the appropriate function, or NULL if operator not found
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
    int i = 0;

    while (ops[i].op != NULL)
    {
        if (strcmp(s, ops[i].op) == 0)
            return (ops[i].f);
        i++;
    }

    return (NULL);
}
