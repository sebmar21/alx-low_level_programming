/**
 * _strcat - function that connect two strings.
 * @dest: pointer to distination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int x, x2;

	x = 0;
	/*find the size of dest array*/
	while (dest[x]
			x++;

	/* iterate through each src array value without the null byte*/
			for (x2 = 0; src[x2] ; x2++)
       /*append src[x2] to dest[x] while overwritting the null byte in dest*/
			dest[x++] = src[x2];

			return (dest);
}
