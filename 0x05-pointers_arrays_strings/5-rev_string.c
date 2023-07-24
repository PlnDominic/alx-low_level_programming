#include "main.h"

/**
  *rev_string - Reverse string function
  *@s: parameter taking into account
  */

void rev_string(char *s)
{
char r = s[0];
int count = 0;
int a;

while (s[count] != 0)
{
count++;
}
for (a = 0; a < count; a++)
{
count--;
r = s[a];
s[a] = s[count];
s[count] = r;
}
}
