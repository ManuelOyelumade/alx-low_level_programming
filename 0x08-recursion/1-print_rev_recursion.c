#include "main.h"
/**
* _print_rev_recursion - a function that prints a new string in reverse
* @s: string to print
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
 _print_rev_recursion(s + 1);
 putchar(*s);
}
}
