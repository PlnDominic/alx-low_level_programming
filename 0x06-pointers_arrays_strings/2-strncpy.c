#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input argument
 * @src: input argument
 * @n: input argument
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int cpString;

cpString = 0;
while (cpString < n && src[cpString] != 0)
{
dest[cpString] = src[cpString];
cpString++;
}
while (cpString < n)
{
dest[cpString] = 0;
cpString++;
}

return (dest);
}
