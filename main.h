#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define DELIMITER " \t\r\n"
#define BUFF_SIZE 1024

char *kpsh_get_input();
char **kpsh_split_strings(char *str);
int execute_command(char **args);
int kpsh_exit(char **args);
void loop();

#endif

