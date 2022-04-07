#include <stdlib.h>
#include "main.h"

/**
 * malloc_cheked - allocates memory using malloc
 *
 *@b: amount of allocaters
 *Return: pointer
 *
 */

void *malloc_checked(unsigned int b)
{
	void *new = malloc(b);

	if (new == NULL)
		exit(98);
	return (new);
}
