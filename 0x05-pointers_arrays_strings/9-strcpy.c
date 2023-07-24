#include "main.h"

/**
* _strcpy - Copies a source string to a destination string.
* @dest: The destination string.
* @src: The source string.
* Return: The pointer to the destination string.
*/
char *_strcpy(char *dest, char *src)
{
    int inc = 0;

    while (*(src + inc) != '\0')
    {
        *(dest + inc) = *(src + inc);
        inc++;
    }
    *(dest + inc) = '\0';

    return (dest);
}
