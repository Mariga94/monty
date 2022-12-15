#include "monty.h"

/**
 * free_stack - free a stack.
 * @stack: pointer ot the stack of a stacK_t
 * Return: nothing
 */
void free_stack(stack_t **stack)
{
	stack_t *temp = *stack;

	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}
