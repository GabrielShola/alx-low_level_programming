#include "main.h"
/**
 * _isalpha - to check for alphabetic character
 * @c : function parameters
 * Return: 1 and 0
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || ((c >= 'a' && c <= 'Z'))
		return  (1);
	else
		return (0);
}
