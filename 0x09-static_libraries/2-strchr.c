#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locate a character in a string
 * @s: The string to be checked
 * @c: The characrer to be checked
 * Return: The new string with the checked character
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
