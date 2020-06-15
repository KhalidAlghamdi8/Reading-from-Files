#ifndef _FUNCTIONS
#define _FUNCTIONS

#pragma warning(disable : 4996)
#include <stdio.h>

#define MAX_LINE_LEN 500
#define MY_EOF -1

char *my_fgets(char *str, int n, FILE *stream);
int my_fputs(const char * s, FILE * stream);
int my_fgets(FILE * stream);
int my_fputc(int c, FILE* stream);
char* my_gets(char *s);
int my_puts(const char *s);
int my_getchar(void);
int my_putchar(int c);
char* my_strcpy(char *destination, const char* source);
char* my_strncpy(char *destination, const char* source, int n);
char* my_strcat(char *destination, const char* source);
char* my_strncat(char *destination, const char* source, int n);
int my_strcmp(const char* s1, const char* s2);
int my_strncmp(const char* s1, const char* s2, int n);


#endif
