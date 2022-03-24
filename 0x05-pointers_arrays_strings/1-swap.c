#include "main.h"
/**
* swap_int - swaps the values
* @a: swaps the value of a to b
* @b: swaps the value of b to a
*
* Return: Always return nothing
*
*/
void swap_int(int *a, int *b)
{
int c;
c = 0;
c = *a;
*a = *b;
*b = c;
}
