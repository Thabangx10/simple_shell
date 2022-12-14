#include "shell.h"

/**
 * function - handling of args to shell
 * @ac: count
 * @av: arr of args
 * @env: enviroment
 * Return: 0;
 */
int main(int ac, char **av, char **env)
{
	if (!ac)
		(void)ac;
	if (!av)
		(void)av;
	if (!env)
		(void)env;
	shell(ac, av, env);
	return (0);
}
