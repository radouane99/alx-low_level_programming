#include "main.h"
/**
*_strcat - function that concatenates two strings
*@dest: entered value
*@src: entered value
*
*  Return: void
*/
char *_strcat(char *dest, char *src)
{
int a;
int b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
#include "main.h"
/**
* _isdigit - checks for a digit (0 through 9)
* @c: int to be checked
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
