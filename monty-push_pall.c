#include "monty.h"

/**
* push_stack - Function that pushes an element to
* the stack
* @head: Ptr to the stack
* @counter: The line count
* Return: Null
*/

void push_stack(stack_t **head, unsigned int counter)
{
int i, m = 0, flag = 0;

if (bus.arg)
{
if (bus.arg[0] == '-')
m++;
while (bus.arg[m] != '\0')
{
if (bus.arg[m] > 57 || bus.arg[m] < 48)
flag = 1;
m++;
}
if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

i = atoi(bus.arg);
if (bus.lifi == 0)
addnode(head, i);
else
addqueue(head, i);
}

/**
* pall_stack - Function that prints all the value
* on the stack, from the top of stack
* @head: Ptr to the stack
* @counter: Line count
* Return: Null
*/

#include "monty.h"

void pall_stack(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
if (h == NULL)
return;

for (; h != NULL; h = h->next)
{
printf("%d\n", h->n);
}
}
