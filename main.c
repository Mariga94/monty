#include "monty.h"

/**
 * main - entry point of our program
 * @argc: argument counter for number of arguments passed to the program
 * @argv: one dimensional array of strings for arguments passed to the program
 *
 * Return: 0 success, otherwise 1 failure
 */

int main(int argc, char **argv)
{
	FILE *fd = NULL;
	char c;

	if (argc != 2)
	{
		return (usage_error());
	}
	else
	{
		fd = open(argv[1], O_RDONLY, 0);
		
		if (fd == NULL)
		{
			return (open_file_error(argv[1]));
		}

		/*Execute bytecode*/
		execute_monty(fd);

		/*close file*/
		close(fd);
		return (EXIT_SUCCESS);
	}
}
