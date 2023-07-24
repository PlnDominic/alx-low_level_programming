#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: parameter
 * Return: half input
 */
void puts_half(char *str)
{
int a, j, l;

l = 0;

for (a = 0; str[a] != 0; a++)
l++;

j = (l / 2);

if ((l % 2) == 1)
j = ((l + 1) / 2);

for (a = j; str[a] != 0; a++)
_putchar(str[a]);
_putchar('\n');
}
