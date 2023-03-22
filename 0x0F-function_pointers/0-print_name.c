#include "main.h"
/**
 * print_name - a function that activates another
 * @name : the pointer to the name
 * @f : the function that needs to be excuted
 * Return : returns void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
