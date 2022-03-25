#include "main.h"
/**
* _islower - checks if the char is in lower case
* @c: contains value to be compared
* Return: Always.
*/
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}