#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: int under investigation
 * Return: 1 print + if n is greater then 0
 * 0 print 0 if n is zero
 * -1 prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
