#include "lists.h"
/**
 *list_len - prints the length of alist
 *@h: pointer
 *Description: the function print the length
 *Return: size of list
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
h =  h->next;
i++;
}
return (i);
}
