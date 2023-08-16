#include "main.h"
/**
 *print_to_98 - print number to 98
 *
 *Discription: print number to 98
 *@n: input
 */
void print_to_98(int n)
{
int do;
if (n > 98)
for (do = n; do > 98; do++)
printf("%d, ", do);
else
for (do = n; do < 98; do++)
printf("%d, ", do);
printf("98\n");
}
