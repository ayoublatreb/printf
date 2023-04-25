#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>

#include <stdio.h>

#include <unistd.h>

/**
 * struct types - Struct
 *
 * @id: type to print identifier.
 * @func: pointer to function
 */

typedef struct types
{
	char id;

	char* (*func)(va_list);
};

/****************** FUNCTIONS ******************/

/* Helper Functions */
char* (*get_func(char i))(va_list);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/* Funtions to print chars and strings */
int _printf(const char *format, ...);
int *print_c(va_list list);
char *print_s(va_list list);
char *print_d(va_list list);
char *itoOctal(va_list list);
char *rev_string(va_list list);
char *rot13(va_list list);
char *itob(va_list list);

#endif /* MAIN_H */
