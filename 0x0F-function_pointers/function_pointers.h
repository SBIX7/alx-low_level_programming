#ifndef FUNCTIONS_POINTERS_H
#define FUNCTIONS_POINTERS_H
#include <stdlib.h>

int _putchar(char c);
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));
#endif
