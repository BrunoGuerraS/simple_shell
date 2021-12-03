#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

typedef struct comands
{
  char *token;
  int (*t)(char **, char **);
} hcomand;

int tokens(char *buffer, char **env);
int (*handle(char *t))(char **token, char **env);
int _ls(char **token, char **env);

#endif
