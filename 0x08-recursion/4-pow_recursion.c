#include "main.h"

/*
 * _pow_recursion - raises an int x to an int y
 *
 * Return: int
 *
 */int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return ((x * y) * _pow_recursion(x, y));
}
