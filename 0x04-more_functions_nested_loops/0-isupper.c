#include "main.h"

/**
 * _isupper - uppercase letters 
 * @c: check char
 *
 * Return : 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && <= 'Z')
		return(1);
	else
		return (0);
}
