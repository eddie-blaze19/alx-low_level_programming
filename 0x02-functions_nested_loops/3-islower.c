#include "main.h"
/**
* _islower - checks for lower char
* @c: - the parameter of the function
* Return: 0 if char is not lowercase
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
