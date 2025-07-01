#include "main.h"
/**
 * find_root - annex function to help you find the root
 * @x: number looking for the sq root
 * @n: int of which we want to find the sq root
 * Return: -1 if excess, x if sq root found
 */
int find_root(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (find_root(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number for the calcul
 * Return: -1 if no natural root, the square root of the number otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
