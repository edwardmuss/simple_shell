/*
 * File: env_builtins.c
 */

#include "shell.h"

/**
 * builtin__env - handles the `env` command (displays environment variables)
 * @params: command arguments
 *
 * Return: command exit status
 */
int builtin__env(void)
{
	/* char **args __attribute__((unused)) = params.args;*/
	char **env = NULL;
	uint env_i = 0;

	while (env[env_i] != NULL)
	{
		puts(env[env_i++]);
		puts("\n");
	}
	return (0);
}
