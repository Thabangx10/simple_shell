#include "shell.h"
/**
 * shell - Infinite loop that runs a shell
 * @ac: Arg count
 * @av: args passed to shell at the beginning of the program
 * @env: Enviroment
 * Return: Void
 */
void shell(int ac, char **av, char **env)
{
	char *line;
	char **args;
	int status = 1;
	char *tmp = NULL;
	char *er;
	char *filename;
	int flow;

	er = "ERROR";
	do {
		prompt();
		line = _getline();
		args = split_line(line);
		flow = bridge(args[0], args);
		if (flow == 2)
		{
			filename = args[2];
			args[0] = find_path(args[0],tmp, er);
			if (args[0] == er)
			{
				args[0] = search_cwd(filename, er);
				if (args[0] == filename)
					write(1, er, 5);
			}
		}
		if (args[0] != er)
			status = execute_prog(args, line, env, flow);
		free(line);
		free(args);
	}while(status);
	if (!ac)
		(void)ac;
	if (!av)
		(void)av;
	if (!env)
		(void)env;
}
