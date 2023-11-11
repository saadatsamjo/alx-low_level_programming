#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument
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
        if (*(ops[i].op) == *(s))
            return (ops[i].f);
        i++;
    }

    fprintf(stderr, "Error: Operator '%s' not recognized\n", s);  // Print error message to stderr
    exit(99);
    return (NULL);
}
