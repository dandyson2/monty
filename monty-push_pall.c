#include "monty.h"

/**
* push_stack - Function that pushes an element to
* the stack
* @_pointer_: Ptr to the stack
* @offset: The line count
* Return: Null
*/

void push_stack(stack_t **_pointer_, unsigned int offset)
{
int y;
int z = 0;
int _index = 0;

if (!carrier.arg)
{
fprintf(stderr, "L%d: usage: push integer\n", offset);
fclose(carrier.hhost);
free(hhost.hosting);
free_stack(*_pointer_);
exit(EXIT_FAILURE);
}

if (carrier.arg[0] == '-')
z++;

while (carrier.arg[z] != '\0')
{
if (carrier.arg[z] > '9' || carrier.arg[z] < '0')
{
_index = 1;
break;
}

z++;

}
if (_index == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", offset);
fclose(carrier.hhost);
free(carrier.hosting);
free_stack(*_pointer_);
exit(EXIT_FAILURE);
}
y = atoi(carrier.arg);
if (carrier.fflags == 0)
addnode(_pointer_, y);
else
addqueue(_pointer_, y);
}

/**
* pall_stack - Function that prints all the value
* on the stack, from the top of stack
* @_pointer_: Ptr to the stack
* @offset: Line count
* Return: Null
*/

void pall_stack(stack_t **_pointer_, unsigned int offset)
{
stack_t *x;
(void)offset;

x = *_pointer_;
for (; h != NULL; h = h->next)
{
printf("%d\n", h->n);
}
}
