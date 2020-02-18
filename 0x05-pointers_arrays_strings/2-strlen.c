#include "holberton.h"
/**
* _strlen - string length
*
*@s: pointer
*@i: integer
* Return : string length
*/
int _strlen(char *s)
{
	int i;
 
    for (i = 0; s[i] != '\0'; ++i);
    return(i);

}
