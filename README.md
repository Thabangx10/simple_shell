0x15. C - Simple Shell

Description

In this project we are tasked with creating our own simple UNIX command interpreter. The program must have the exact same output as sh (/bin/sh) as well as the exact same error output. The only difference is when you print an error, the name of the program must be equivalent to your argv[0].

0. README, man, AUTHORS

Write a (README)[./README.md]

Write a (man)[./man_1_simple_shell] for your shell.

You should have an (AUTHORS)[./AUTHORS] file at the root of your repository, listing all individuals having contributed content to the repository.

1. Betty would be proud

Write a beautiful code that passes the Betty checks

2. Simple shell 0.1

Write a UNIX command line interpreter.

Your Shell should:

Display a prompt and wait for the user to type a command. A command line always ends with a new line.

The prompt is displayed again each time a command has been executed.

The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.

The command lines are made only of one word. No arguments will be passed to programs.

If an executable cannot be found, print an error message and display the prompt again.

Handle errors.

You have to handle the "end of file" condition (Ctrl+D)

3. Simple shell 0.2

Handle command lines with arguments

4. Simple shell 0.3

Handle the PATH

5. Simple shell 0.4

Implement the exit built-in, that exits the shell

Usage: exit

You dont have to handle any argument to the built-in exit

6. Simple shell 1.0

Implement the env built-in, that prints the current environment
