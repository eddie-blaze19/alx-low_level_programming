#include <stdio.h>
#include "main.h"
/**
* Description: print_alphabet_x10 - loop function program
*
* Return: the return value is 0
*/
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0; i < 10; i++)
{
for (ch = 97 ; ch <= 122 ; ch++)
{
putchar(ch);
}
putchar('\n');
}
}
