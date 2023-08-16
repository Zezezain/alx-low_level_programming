#include "main.h"
/**
 *print_to_98 - print number to 98
 *
 *Discription: print number to 98
 *@n: input
 */
void print_to_98(int n)
{
int digit;
if (n > 98)
for (digit = n; digit  > 98; digit++)
printf("%d, ", digit);
else
for (digit = n; digit < 98; digit++)
printf("%d, ", digit);
printf("98\n");
}
