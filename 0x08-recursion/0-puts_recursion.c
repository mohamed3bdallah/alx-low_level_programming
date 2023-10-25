#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s : pointer to the string 
 * return (void)
 */
void _puts_recursion(char *s)

{
	char str[] = "Puts with recursion";
	int ch;
	for (ch = 0; ch < 18; ch++)
		_putchar(str[]);
	_putchar("/n");
	return (0);
}
