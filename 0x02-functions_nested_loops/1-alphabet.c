#include <stdio.h>
#include "1-main.c"
/**
* Description: print_alphabet - loop function program
*
* Return: the return value is 0
*/
void print_alphabet(void)
{
int i;
for (i = 97 ; i <= 122 ; i++)
{
putchar(i);
}
}
/**
* Description: main - This is the start of the program
*
* Return: the return value is 0
*/
int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
