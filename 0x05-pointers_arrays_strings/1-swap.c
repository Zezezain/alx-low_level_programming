#include "main.h"
/**
 *swap_int - swap two values
 *@a: first parameter
 *@b: second parameter
 *Return: return alawys 0
 */

void swap_int(int *a, int *b)
{
int sw;
sw = *a;
*a = *b;
*b = sw;
}
