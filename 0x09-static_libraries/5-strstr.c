#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
