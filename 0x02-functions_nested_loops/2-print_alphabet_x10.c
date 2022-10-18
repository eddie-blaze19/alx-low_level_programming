#include <stdio.h>
/**
* Description: print_alphabet_x10 - loop function program
*
* Return: the return value is 0
*/
void print_alphabet_x10(void)
{
char ch;
for (int i = 0; i < 10; i++)
{
for (int ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
}
/**
* Description: main - This is the start of the program
*
* Return: the return value is 0
*/
int main(void)
{
print_alphabet_x10();
return (0);
}
