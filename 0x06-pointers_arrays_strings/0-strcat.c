#include "main.h"
/**
 * _strcat - Lets concatenates two strings
 * @dest: input argument
 * @src: input argument
 *
 * Return: desk
 */
char *_strcat(char *dest, char *src)
{
int conCat1;
int conCat2;

conCat1 = 0;
while (dest[conCat1] != 0)
{
conCat1++;
}
conCat2 = 0;
while (src[conCat2] != 0)
{
dest[conCat1] = src[conCat2];
conCat1++;
conCat2++;
}

dest[conCat1] = 0;
return (dest);
}
