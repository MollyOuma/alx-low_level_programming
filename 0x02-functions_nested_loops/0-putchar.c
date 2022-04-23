#include "main.h"

/**
 * main-Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c;
	char z[] = "_putchar\n";

	while (i <= 7)
	{
		c = z[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
	return (0);
}
