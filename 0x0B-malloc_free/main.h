#ifndef MAIN_H
#define MAIN_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);

#endif
