/*
 * File: env_builtin.c
 */

#include "shell.h"

/**
 * builtin__env - handles the `env` command (displays environment variables)
 *
 * Return: command exit status
 */
int builtin__env(void)
{
	char **env = NULL;
	uint env_i = 0;

	while (env[env_i] != NULL)
	{
		puts(env[env_i++]);
		puts("\n");
	}
	return (0);
}
