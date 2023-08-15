#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always returns 0
 *
 */
int main(void)
{
  char *sh="holberton";
  while(*sh){
    _putchar(*sh);
    sh++;
  }
  _putchar('\n');
  return (0);
}
