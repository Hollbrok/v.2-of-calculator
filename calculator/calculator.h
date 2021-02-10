#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

#include <Txlib.h>

double get_express(char** buffer);

double get_op(char** buffer);

double get_number(char** buffer);

double get_bracket(char** buffer);

double get_pow(char** buffer);

void ignore_spaces(char** buffer);

char* make_buffer(FILE *text);

#endif // CALCULATOR_H_INCLUDED
