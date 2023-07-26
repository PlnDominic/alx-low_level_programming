#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Lets prints buffer
 * @b: parameter 
 * @size: parameter
 */

void print_buffer(char *b, int size)
{
int k, j, i;

k = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (k < size)
{
j = size - k < 10 ? size - k : 10;
printf("%08x: ", k);
for (i = 0; i < 10; i++)
{
if (i < j)
printf("%02x", *(b + k + i));
else
printf("  ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < j; i++)
{
int add_bki = *(b + k + i);

if (add_bki < 32 || add_bki > 132)
{
add_bki = '.';
}
printf("%c", add_bki);
}
printf("\n");
k += 10;
}
}
