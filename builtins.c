#include "shell.h"

/**
 * function - exit the bullitin
 * @line: user buffer input
 * @args: user arguments
 * @env: Enviroment
 * Return: Voud
 */
void exit_shell(char **args, char *line, char **env)
{
	free(args);
	free(line);
	(void)env;
	exit(0);
}
/**
 * function - to print out shell enviroment
 * @args: Arguments split from cmd
 * @line: User input buffer
 * @env: Enviroment
 */
void env_shell(char **args, char *line, char **env)
{
	int size, i = 0;

	while (env[i] != NULL)
	{
		size = _strlen(env[i]);
		write(1, env[i], size);
		write(1, "\n", 1);
		i++;
	}
	(void)args;
	(void)line;
}
