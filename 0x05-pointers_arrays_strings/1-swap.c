#include "main.h"
/**
*swap_int - swap the values of two integers
*@a: integer1 to be swaped
*@b: integer2 to be swaped with1
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
