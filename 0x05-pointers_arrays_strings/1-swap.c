#include "main.h"
#include <stdio.h>
/**
* main - checks the code
*
* Return: Always 0.
*/
int main(void)
{
int a;
int b;
a=98;
b=42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);
}
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
