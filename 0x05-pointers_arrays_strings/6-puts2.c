#include "main.h" 
/**
* puts2 - prints each character of a string
* @str: the string to be use
*
*/
void puts2(char *str)
{
int = 0;
while(str[i] != '\0')
{
if(i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
