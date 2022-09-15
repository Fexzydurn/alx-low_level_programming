#include <unistd.h>
#include "main.h"

/**
 * _islower - prints 1 or 0 depending on the input
 *
 * @c: first parameter
 *
 * Description - prints all lower case letters
 *
 * return: always 0 (success)
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
