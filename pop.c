#include "monty.h"
/**
 * f_pop - removes top element
 * @head: top of stack
 * @counter: line_number
 */
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *h;

if (*head == NULL)
{
fprintf(stderr, "L%d: usage: can't pop an emoty stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
*head = h->next;
free(h);
}
