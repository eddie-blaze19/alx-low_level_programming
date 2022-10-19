#include "main.h"
/**
* _isalpha - checks for char alphabet
* @c: is the char that will be checked
*
* Return: if char is lower or upper return 1
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
