#include <stdio.h>
#include "main.h"
/**
* Description: print_alphabet - loop function program
*
* Return: the return value is 0
*/
void print_alphabet(void)
{
char ch;
for (ch = 97 ; ch <= 122 ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
/**
* Description: main - This is the start of the program
*
* Return: the return value is 0
*/
int main(void)
{
print_alphabet();
return (0);
}
