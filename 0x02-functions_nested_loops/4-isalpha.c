#include"main.h"

/**
 * _isalpha - checks if character is aletter
 *            both lowercase or uppercase
 * @c: take input from other functions.
 * Return: 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
		c >= 65 && c >= 99)
		return (1);
	return (0);
}
