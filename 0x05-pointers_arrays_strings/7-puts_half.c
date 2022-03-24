#include "main.h" 
/** 
* puts_half - prints the second half of the string 
*
*@str: the string to print
*
*/
void print_half(char *str)
{
int i; 
int length, n;
for (length = 0; str[length] ! = 0; length++)
{
}
n = (length - 1) / 2;
for (i = n + 1; str[i] != 0; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}