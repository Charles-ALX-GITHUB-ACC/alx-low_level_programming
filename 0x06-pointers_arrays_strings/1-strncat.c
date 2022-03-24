#include "main.h"

/**
* _strncat - concatinates 2 strings.
* @dest: first string
* @src: second string.
* @n: the number of bytes to use from src.
* Return: string.
*/

char *_strcat(char *dest, char *src, int n)
{
int i = 0;
int k = 0;

while(dest[i] != '\0')
i++;
while (src[k] != '\0')
{
dest[i] = src[k];
k++;
i++;
}
if (n > 0)
{
dest[i] = '\0';
}
return (dest);
}