/**
 * _sqrt_recursion - a function that
 *                   returns the natural square
 *                   root of anumber
 *@n: input number
 *Return: the square root of x
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion(n + 1));
}
