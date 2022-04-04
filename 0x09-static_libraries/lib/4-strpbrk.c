#include <string.h>

/**
 * _strpbrk - a function ...
 * @s: the chaine
 * @accept: the chaine
 *
 * Return: 1 or 0
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
