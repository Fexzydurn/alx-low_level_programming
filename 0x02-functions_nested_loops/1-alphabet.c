#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - for alphabet
 *
 * description - shows alphabet of letters
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)


	{

		_putchar(i);

	}

	_putchar ('\n');

}
