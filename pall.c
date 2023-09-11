#include "monty.h"

/**
 * pall - prints all values from the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the number of a line of the file
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = (*stack)->next;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)line_number;
}

