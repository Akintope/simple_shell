#include "shell.h"

/**
 * main - is the shell function
 * @argc: The Arguments numbers.
 * @argv: the string arguments.
 * @environ: environment
 * Return: 0
 */

int main(int argc, char **argv, char **environ)
{
(void)argc;
if (isatty(STDIN_FILENO))
func_loop(environ, argv[0]);
else
no_interactive(environ, argv[0]);
return (0);
}
