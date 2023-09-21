#include "main.h"


/**
* print_rev - prints string in reverse
* @s: string to be printed
* Retun: 0
*/

void print_rev(char *s)
{
	int log;

	for (log = 0; s[log] != '\0'; ++log)
		;
	for (--log; log >= 0; --log)
		putchar(s[log]);
	putchar('\n');
}
