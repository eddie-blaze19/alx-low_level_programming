#include "main.h"
/**
* _strlen - return the length of a string
* @s: char to check
* Description: this will return the length of a string
* Return: val of a
*/

int _strlen(char *s)
{
int a = 0;
for (; *s++;)
a++;
return (a);
}
