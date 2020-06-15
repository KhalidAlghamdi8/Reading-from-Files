#include "Functions.h"



char *my_fgets(char *str, int n, FILE *stream)
{
	int ch, chars_read = 0;

	while (chars_read < n - 1 && (ch = getc(stream)) != EOF) {
		str[chars_read++] = ch;
		if (ch == '\n')
			break;
	}
	if (chars_read == 0 || ferror(stream)) {
		return NULL;
	}
	str[chars_read] = '\0';
	return str;
}

int my_fputs(const char * s, FILE * stream)
{
	int i = 0;
	while (*s) {
		if (putc(*s++, stream) == EOF){
			return MY_EOF;
		}
		i++;
	}
	return i;
}

int my_fgets(FILE * stream){
	int c;
	c = fgetc(stream);
	if (feof(stream)) {
		return MY_EOF;
	}
	return (int)c;
}

int my_fputc(int c, FILE* stream){
	char cc = (char)c;
	if (putc(cc, stream) == EOF){
		return MY_EOF;
	}

	return (int)cc;
}

char* my_gets(char *s){
	int ch, chars_read = 0;

	while (1) {
		ch = getc(stdin);
		s[chars_read++] = ch;
		if (ch == '\n')
			break;
	}
	if (chars_read == 0 || ferror(stdin)) {
		return NULL;
	}
	s[chars_read] = '\0';
	return s;
}

int my_puts(const char *s){

	int i = 0;
	while (*s) {
		if (*s == '\n')
			printf("\n");
		putc(*s++, stdout);
		i++;
	}
	return i;
}

int my_getchar(void){
	char ch;
	ch = getc(stdin);
	return (int)ch;
}

int my_putchar(int c){
	char s = (char)c;
	putc(s, stdout);
	return (int)s;
}


char* my_strcpy(char *destination, const char* source){
	char *start = destination;

	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}

	*destination = '\0';
	return start;
}

char* my_strncpy(char *destination, const char* source, int n){

	size_t i;
	for (i = 0; i < n && source[i] != '\0'; i++) {
		destination[i] = source[i];
	}
	destination[i] = '\0';
	return destination;
}

char* my_strcat(char *destination, const char* source){
	char* strret = destination;
	if ((NULL != destination) && (NULL != source))
	{

		while (NULL != *destination)
		{
			destination++;
		}

		while (NULL != *source)
		{
			*destination++ = *source++;
		}

		*destination = '\0';
	}
	return strret;
}

char* my_strncat(char *destination, const char* source, int n){

	char* strret = destination;
	int i = 0;
	if ((NULL != destination) && (NULL != source))
	{

		while (NULL != *destination)
		{
			destination++;
		}

		while (NULL != *source)
		{
			*destination++ = *source++;
			i++;

			if (i == n) break;

		}

		*destination = '\0';
	}
	return strret;

}

int my_strcmp(const char* s1, const char* s2){


	while (*s1 && *s2 && *s1 == *s2) { ++s1; ++s2; }
	unsigned r = (unsigned char)(*s1) - (unsigned char)(*s2);
	if (r == 0) return 0;
	else return -1;
}

int my_strncmp(const char* s1, const char* s2, int n){
	int i = 0;
	while (*s1 && *s2 && *s1 == *s2 && i < n - 1) { ++s1; ++s2; i++; }
	unsigned r = (unsigned char)(*s1) - (unsigned char)(*s2);
	if (r == 0) return 0;
	else return -1;
}
