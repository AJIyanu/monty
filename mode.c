#include "monty.h"

/**
 * smode - set to stack
 * @stack: not useful
 * @line_number: not useful
 */

void smode(stack_t **stack, unsigned int __attribute__ ((unused)) line_number)
{
	stack_t *ptr = *stack;

	mode = 1;
}

/**
 * qmode - set to queue
 * @stack: not useful
 * @line_number: not useful
 */

void qmode(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *ptr = *stack;

	mode = 2;
}
