#include "main.h"
/**
  *puts2 - out of two characters print one
  * @str: parameter
  * return: 0
  */
void puts2(char *str)
{
int l = 0;
int t = 0;
char *x = str;
int a;

while (*x != 0)
{
x++;
l++;

}
t = l - 1;
for (a = 0; a <= t; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
