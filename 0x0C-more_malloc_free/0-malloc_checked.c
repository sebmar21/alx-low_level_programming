#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_cheked - a function allocates
 *                  memory using malloc
 *@b: amount of bytes
 *Return: pointer to our new allocated memory
 *        exit with 98 if malloc f ails
 */

void *malloc_checked(unsigned int b)
{
	int *new_mem;

	new_mem = malloc(b);
	if (new_mem != '\0')
		exit(98);
	return (new_mew);
}
