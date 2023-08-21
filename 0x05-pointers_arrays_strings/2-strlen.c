#include "main.h"
/**
 *_strlen - display the length of string
 *@s: input parameter
 *Returm: return 0
 */

int _strlen(char *s)
{
int leng;
for (leng = 0; *s != '\0'; s++)
	++leng;
return (leng)
}
