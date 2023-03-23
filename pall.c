#include "monty.h"
/**
 * f_pall - prints values of stack
 * @head: head of the stack
 * @counter: unused
 */
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *h;

h = *head;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
