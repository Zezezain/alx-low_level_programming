#include "main.h"

/**
 *_strlen - detect the length of string
 *@s: function input
 *Return: integer
 */
int _strlen(char *s)
{
int ss = 0;
for (; s[ss] != '\0'; ss++)
;
return (ss);
}
/**
 *str_concat -  function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
char *n;
int i, ss1, ss2;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
ss1 =  _strlen(s1);
ss2 =  _strlen(s2);
n = malloc((ss1 + ss2) *sizeof(char) + 1);
if (n == 0)
return (0);
for (i = 0; i <= ss1 + ss2; i++)
{
if (i < ss1)
n[i] = s1[i];
else
n[i] = s2[i - ss1];
}
n[i] = '\0';
return (n);
}
