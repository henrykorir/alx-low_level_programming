#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: pointer to function to print the name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
