#include "main.h"

/**
  * factorial - function parameter
  *
  * @n: function parameter
  *
  * Return: Function n.
  */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
