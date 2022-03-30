#include <main.h>
/**
* _string - finds first matching char in string
* 
* @s: input string o search for matching char
* @addcpt: characters that could be matched 
* Return: pointer to matching char 
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
if (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
goto exit;
exit: return (s[i] != '\0' ? s + i : '\0');
}