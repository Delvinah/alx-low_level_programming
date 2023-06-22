#include "main.h"
#include<unistd.h>
/**
* _putchar - writes to stdout the character c
* @c: the character to print
* Return: 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
