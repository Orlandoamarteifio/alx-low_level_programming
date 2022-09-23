#include "main.h"
/**
*cap_string - capitalizes every first letter of a word in a string.
*separators of words are:  space, tabulation,
  * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *@x: pointer to string.
 *
 *Return: pointer to x.
 */
char *cap_string(char *x)
{
int count;

/*  scan through string */
count = 0;
while (x[count] != '\0')
{/* if next character after count is a char , capitalise it */
if (x[0] >= 97 && x[0] <= 122)
{
x[0] = x[0] - 32;
}
if (x[count] == ' ' || x[count] == '\t' || x[count] == '\n'
|| x[count] == ',' || x[count] == ';' || x[count] == '.'
|| x[count] == '.' || x[count] == '!' || x[count] == '?'
|| x[count] == '"' || x[count] == '(' || x[count] == ')'
|| x[count] == '{' || x[count] == '}')
{
if (x[count + 1] >= 97 && x[count + 1] <= 122)
{
x[count + 1] = x[count + 1] - 32;
}
}
count++;
}
return (x);
}

