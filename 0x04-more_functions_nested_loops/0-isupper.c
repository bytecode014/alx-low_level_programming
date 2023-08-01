#include "main.h"

/**
 * _isupper - lowercase letters 
 * @c:check character
 * Return: 1 for uppercase character or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && <= 90)
		return (1);
	else
		return (0);
}
