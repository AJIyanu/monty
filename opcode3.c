#include "monty.h"

/**
 * div - division oooo
 * @stack: list address
 * @line_number: line
 *
 * Return: void
 */

void div(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;
	int dived;

	if (count(stack) < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		cleanStack(stack);
		exit(EXIT_FAILURE);
	}
	if (mode == 1)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		if (ptr->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			cleanStack(stack);
			exit(EXIT_FAILURE);
		}
		ptr = ptr->prev;
		dived = ptr->n / (ptr->next)->n;
		ptr->n = dived;
		_pop(stack, line_number);
	}
	if (mode == 2)
	{
		if (ptr->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			cleanStack(stack);
			exit(EXIT_FAILURE);
		}
		ptr = ptr->next;
		dived = ptr->n / (ptr->prev)->n;
		ptr->n = dived;
		_pop(stack, line_number);
	}
}
