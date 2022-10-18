#include <stdio.h>
/**
* Description: alphabet - loop function program
*
* Return: the return value is 0
*/
void alphabet(void)
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
alphabet();
putchar('\n');
return (0);
}
