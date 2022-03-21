/**
 * swap_int - swaps the value of two integers 
 *         using two inputs parameter
 *
 *@a: input parameter
 *@b: input parameter
 *
 * Return Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
