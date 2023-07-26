#include "main.h"
/**
 * _strcmp - Lets compare string values
 * @s1: input argument
 * @s2: input argument
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int compString;

compString  = 0;
while (s1[compString] != 0 && s2[compString] != 0)
{
if (s1[compString] != s2[compString])
{
return (s1[compString] - s2[compString]);
}
compString++;
}
return (0);
}
