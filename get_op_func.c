#include "monty.h"

/**
 * get_op_func - function to select correction operation function
 * @token: 1st bytecode input (opcode)
 * Return: pointer to correct function
 */

void (*get_op_func(char *token))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruction_s[] = 
	{
		{"pop", pop},
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{NULL, NULL}
	};
	int i = 0;

	while (instruction_s[i].f != NULL)
	{
		if (strcmp(token, instruction_s[i].opcode) == 0)
		{
			return (instruction_s[i].f);
		}
		i++;
	}
	return (NULL);
}
