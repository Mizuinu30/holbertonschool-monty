#include "monty.h"
/**
 * m_pint - prints the value of the top of the stack
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t var;

	stack_t *head = *stack;

	if (var.stack_len == 0)
	{
		sprintf(STDOUT_FILENO, "L%u: can't print, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}

