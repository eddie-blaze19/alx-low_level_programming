#include <stdio.h>
/**
* Description: print_alphabet - loop function program
*
* Return: the return value is 0
*/
void print_alphabet(void)
{
char ch;
for (int ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
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
