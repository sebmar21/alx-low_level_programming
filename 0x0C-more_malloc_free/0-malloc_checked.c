#include "main.h"

/**
 * malloc_cheked - a function allocates
 *                  memory using malloc
 *@b: amount of bytes
 *Return: pointer to our new allocated memory
 *        exit with 98 if malloc f ails
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
