#include "monty.h"

/**
 * monty_push - pushes an element to the stack
 *
 * Return:
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	if (!stack)
	{
		return (unknown_int_error(line_number);
	}
	
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		return (malloc_error());
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

}
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = (*stack)->next;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	(void)line_number;
}

void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		return (EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->next->n);
}

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next = NULL;

	if((*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		return(EXIT_FAILURE);
	}

	next = (*stack)->next->next;
	free((*stack)->next);
	if (next)
	{
		next->prev = *stack;
	}
	(*stack)->next = next;
}

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		return (EXIT_FAILURE);
	}

	temp = (*stack)->next->next;
	(*stack)->next->next = temp->next;
	(*stack)->next->prev = temp;
	if(temp->next)
	{
		temp->next->prev = (*stack)->next;
	}
	temp->next = (*stack)->next;
	temp->prev = *stack;
	(*stack)->next = temp;
}
