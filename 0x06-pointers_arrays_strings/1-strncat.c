#include "main.h"
/**
 * _strncat - Lets concatenate another two strings
 * @dest: input argument
 * @src: input argument
 * @n: input argument
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int z;

a = 0;
while (dest[a] != 0)
{
a++;
}
z = 0;
while (z < n && src[z] != 0)
{
dest[a] = src[z];
a++;
z++;
}
dest[a] = 0;
return (dest);
}
