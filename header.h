#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>

void view(FILE*);
void Big_To_Little_endian(void *,int);
void print_tag(char*, char*);

void edit(char*, char*, char*);
void endian_conversion(void*,int);
#endif