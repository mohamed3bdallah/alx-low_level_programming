#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s:function parametar
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1));

}
}
