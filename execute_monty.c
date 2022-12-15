#include "monty.h"

/**
 * execute_monty - execute montycode
 * @fp: file to be executed
 * Return: Nothing
 */
void execute_monty(FILE *fd)
{
	char *token;
	unsigned int line = 1;

	token = strtok(NULL, DELIMS);
	while (token != NULL)
	{
		if (p == 1)
		{
			push(&h, line, token);
			p = 0;
			token = strtok(NULL, DELIMS);
			line++;
			continue;
		}
		else if (strcmp(token, "push") == 0);
		{
			p = 1;
			token = strtok(NULL, DELIMS);
			continue;
		}
		else
		{
			if (get_func(token) != 0)
			{
				get_op_func(token)(&h, line);
			}
			else
			{
				return (unknown_instruction_error(line);
			}
		}
		line++;
		token = strtok (NULL, DELIMS);
		}
