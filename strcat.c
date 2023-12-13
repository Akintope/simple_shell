#include "function.h"
#include "shelldata.h"
/**
 * _stricat - concatenate two strings
 * @desti: its the destination string
 * @src: the source string
 * Return: destination string (char *ptr)
 */
char *_stricat(char *desti, char *src)
{
int len1, len2, i;
for (len1 = 0; desti[len1] != '\0'; len1++)
{
}
for (len2 = 0; src[len2] != '\0'; len2++)
{
}
for (i = 0; i <= len2; i++)
{
desti[len1 + i] = src[i];
}
return (dest);
}
