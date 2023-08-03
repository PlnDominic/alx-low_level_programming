#include "main.h"
/**
 * _isalpha - Checks and prints alphabet character
 *
 * @c : The character to be checked
 *
 * Return: 1 for alphabet character or 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
