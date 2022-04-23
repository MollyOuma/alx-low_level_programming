#include main.h

/**
 * print alphabet -entry point
 *
 * Description:print alphabets using _putchar
 *
 * return:void
 */
void print_alphabet(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
