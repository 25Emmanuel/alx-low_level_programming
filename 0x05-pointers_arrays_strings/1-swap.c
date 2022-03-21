#include "holberton.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int *p;
	int *pp;
	p = &a;
	pp = &b;
	*p = b;
	*pp = a;
}
