#include "main.h"
#include <stdlib.h>

/**
* print_R - prints a string in rot13
* @R: string to print
*
* Return: number of chars printed
*/
int print_R(va_list R)
{
char *str;
unsigned int i, j;
int count = 0;
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

str = va_arg(R, char *);
if (str == NULL)
str = "(ahyy)";
for (i = 0; str[i]; i++)
{
for (j = 0; in[j]; j++)
{
if (in[j] == str[i])
{
_putchar(out[j]);
count++;
break;
}
}
if (!in[j])
{
_putchar(str[i]);
count++;
}
}
return (count);
}
root@fb05d0cf7196:/printf# cat _putchar.c
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
