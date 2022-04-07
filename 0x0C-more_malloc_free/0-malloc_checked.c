#include "main.h"

/**
 * malloc_cheked - allocates memory using malloc
 *
 *@b: amount of allocaters
 *Return: pointer to our new allocated memory
 *        exit with 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
