#include "main.h"

/**
 * _isdigit - checks for a digit, 0 through 9
 * @c: The character to be checked
 * Return: 1 on success, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
