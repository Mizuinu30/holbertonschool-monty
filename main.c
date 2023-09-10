#include "monty.h"

stack_t **global_head;

/**
 * main - the root of the project
 * @argc: how many arguments were passed to a program
 * @argv: arguments vector
 *
 * Return: on success, always EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	char *content;
	stack_t *head;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	head = NULL;
	global_head = &head;

	file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		content = content;
		line_number++;
		if (read_line > 0)
		{
			execute(content, &stack, line_number, file);
		}
		free(line_number);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
