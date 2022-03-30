#include <math.h>

/**
 * _pow_recursion - a function that return
 *                  the value of x raised
 *                  to the pwoer of y
 * @x: input integer
 * @y: input integer
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else
		return (x* _pow_recursion(x, y - 1));
}
