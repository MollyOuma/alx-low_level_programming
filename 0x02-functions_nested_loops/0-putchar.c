#include <stdio.h>
#include <string>

/**
 * main-Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch[7] = "_putchar";
	int j;

	for (j = 0; j < 7; j++)
		_putchar(ch[j]);
	_putchar('\n');
	return (0);
}
