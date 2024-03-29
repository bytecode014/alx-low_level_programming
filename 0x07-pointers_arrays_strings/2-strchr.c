#include "main.h"

/**
 * _strchr: a function that locates a character in a string
 * @s: pointer pointing to the string
 * @c: charater to be found
 * Return:  pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	for (i = 0; (s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i)
	}

	if (*(s + i) == c)
		return (s + i);
	return (0);
}
