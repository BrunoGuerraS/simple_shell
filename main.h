#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

#ifndef MAX
#define MAX 100
#endif
/**
 * struct comands - a struct
 * @token: string
 * @t: pointer to function
 * Description: a struct handler tokens
 */
typedef struct comands
{
char *token;
int (*t)(char **);
} hc;

int tokens(char *buffer, char **env);
int _ls(char **token, char **env);
int _printPath(char **tokens, char **env, char *savetoken);
int cd(char **tokens);
int (*handle(char *tokens))(char **);
int salida(char **tokens);

#endif
