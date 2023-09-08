#include "monty.h"

/**
 * push - pushes new node to the end of the stack
 * @stack: double pointer to the head of the stack
 * @numbers: the number of a line of the file
 *
 * Return: void
 */

 void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	char *numbers;

	numbers = strtok(NULL, DELIMS);
	if (numbers == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	node->n = atoi(numbers);
	node->prev = NULL;
	node-> = *stack;

	if (*stack != NULL)
		(*stack)->prev = node;

	*stack = node;
}

/**
 * pall - prints all values from the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the number of a line of the file
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void) line_number;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
