#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
int bytes, i;
char *arr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

arr = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr [i]);
break;
}
printf("%02hhx\n", arr[i]);
}
return (0);
}
