#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
* print_to_98 - a function that prints all natural numbers from n to 98
* user input's prints to 98, regardless < 98 or > 98
* @n:number input
*
* Return: always 0 (success)
*/
void print_to_98(int n)
{
int i;

if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
