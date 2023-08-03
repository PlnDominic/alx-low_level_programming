#include "main.h"
/**
 * _strncpy - Copies a string from src to dest
 *
 * @dest: Destination of the copied string
 *
 * @src: Source of string to be copied
 *
 * @n: The number of characters to be copied
 *
 * Return: Return the value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_string_start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (dest_string_start);
}
