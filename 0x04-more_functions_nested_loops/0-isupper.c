#include "main.h"

/**
 * _isupper - to print uppercase
 * Return: 1 on success and 0 on failure
 * @c: variable text
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


