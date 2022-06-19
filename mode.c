#include "monty.h"

/**
 * _smode - set to stack
 * @stack: not useful
 * @line_number: not useful
 */

void _smode(stack_t **stack, unsigned int __attribute__ ((unused)) line_number)
{
	stack_t *ptr = *stack;

	_mode = 1;
}

/**
 * _qmode - set to queue
 * @stack: not useful
 * @line_number: not useful
 */

void _qmode(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *ptr = *stack;

	_mode = 2;
}

/**
 * free_dlistint - Free a list.
 * @stack: Head node.
 * Return: Nothing.
 */
void free_dlistint(stack_t *stack)
{
	stack_t *current = NULL;

	current = stack;

	if (current != NULL)
	{
		free_dlistint(current->next);
		free(current);
	}
}

