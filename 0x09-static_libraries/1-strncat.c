#include "main.h"
/**
 * _strncat - Concatenates string
 *
 * @dest: Destination of concatenated string
 *
 * @src: Source of string to be concatenated
 *
 * @n: Number of bytes to concatenate
 *
 * Return: Return the value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_pt = dest;

	while (*dest_pt != '\0')
	{
		dest_pt++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_pt = *src;
		dest_pt++;
		src++;
		n--;
	}
	*dest_pt = '\0';
	return (dest);
}
