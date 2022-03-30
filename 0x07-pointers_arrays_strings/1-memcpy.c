#include <main.h>
/**
* _memcpy - input number
* @dest: input pointer to source string
* @src: input pointer to source string
* @n: number of bytes
* 
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}