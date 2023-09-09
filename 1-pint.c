#include "monty.h"
/**
 * pint - prints the value of the top of the stack
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (stack == NULL || *stack == NULL)
	{
		pint(line_number);
		return;
	}
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	
	printf("%d", temp->n);
	printf("\n");
}

