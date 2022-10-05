#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks if character is alphabet
 *
 * @c: type int character
 *
 * Return: 1 if letter lower or uppercase and otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
