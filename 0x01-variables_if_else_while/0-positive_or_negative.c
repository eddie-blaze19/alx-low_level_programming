#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*Description: main - function uses rand function,
*to find a value for n
*
*Return: a zero val
*/
int main(void)
{
srand(time(0));
int n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
