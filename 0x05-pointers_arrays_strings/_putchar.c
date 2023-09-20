#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: the character to be printed
* Return: on succes returns 1
* on error, returs -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
