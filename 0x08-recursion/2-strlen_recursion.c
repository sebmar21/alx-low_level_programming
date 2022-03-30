#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - a function that
 *                     calculate the length
 *                     of the string
 *@s: input string
 *Return: number of bytes in the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
