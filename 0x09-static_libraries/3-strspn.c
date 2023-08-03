#include "main.h"
/**
 * _strspn - Get the length of a prefix string
 * @s: string to search from
 * @accept: string to search
 * Return: length of string prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[a] != accept[b]; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (0);
}
