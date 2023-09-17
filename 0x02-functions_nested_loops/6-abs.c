#include "main.h"
/**
* _abs - function to check for whole numbers
* @n: parameter function
* Return: returns a or -a
*/

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n >= 0)
	{	return (n);
	}
	return (0);
}
