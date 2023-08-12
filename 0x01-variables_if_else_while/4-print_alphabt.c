#include <stdio.h>
/**
 * main - main function
 * Return: return 0
 * Discription: 'all letter except q and e'
 */
int main(void)
{
int no;
for (no = 97; no <= 122; no++)
{
if (no == 101 || no == 113)
{
continue;
}
putchar(no);
}
putchar('\n');
return (0);
}
