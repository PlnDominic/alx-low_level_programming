#include "main.h"
/**
 * leet - Entry point
 * @n: argument
 * Return: n always
 */
char *leet(char *n)
{
int a1, a2;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (a1 = 0; n[a1] != 0; a1++)
{
for (a2 = 0; a2 < 10; a2++)
{
if (n[a1] == s1[a2])
{
n[a1] = s2[a2];
}
}
}
return (n);
}
