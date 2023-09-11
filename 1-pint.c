#include "monty.h"
/**
 * pint - prints the value of the top of the stack
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 */

void pint(stack_t **stack, unsigned int line_number)
{
if ((*stack)->next == NULL)
	{
		set_op_tok_error(pint_error(line_number));
		return;
	}

	printf("%d\n", (*stack)->next->n);
}
