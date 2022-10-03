#include "main.h"
/**
 *_strcat - function that concatenates two strings.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *
 *Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
char *temp = dest;

while (*dest)
dest++;

while (*src)
*dest++ = *src++;

*dest = '\0';
return (temp); 
}
