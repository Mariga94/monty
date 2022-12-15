#include "monty.h"

/**
 * usage_error - returns error if user does not give any file/
 * more than one argument to the program
 *
 * Return: (EXIT_FAILURE)
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}
/**
 * open_file_error - returns error when it's not possible to open the file
 *@filename: name of file
 * Return: (EXIT_FAILURE) Error: Can't open file <file>
 */

int open_file_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
/**
 * malloc_error - returns error if you can't malloc anymore
 * Return: (EXIT_FAILURE)
 */
int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}
/**
 * unknown_instruction_error - returns error if the file contains an
 * invalid instruction
 * @line_number: line with unknown instruction
 * Return: EXIT_FAILURE
 */
int unknown_instruction_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	return (EXIT_FAILURE);
}
