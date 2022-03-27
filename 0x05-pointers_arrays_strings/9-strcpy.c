#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src, includin \0
 * @src: pointer
 * @dest: pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
dest = strcpy(dest, src);
return (dest);
}
