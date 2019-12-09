#ifndef OS_LAB_5_VECMD5_H
#define OS_LAB_5_VECMD5_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct vector {
    char** items;
    int capacity;
    int total;
} vector;

vector* vector_init();
int vector_total(vector* v);
static void vector_resize(vector* v, int index);
void vector_add(vector* v, char* item);
void vector_set(vector* v, int index, char* item);
char* vector_get(vector* v, int index);
void vector_delete(vector* v, int index);
void vector_free(vector* v);
bool check(char* val);
#endif //OS_LAB_5_VECMD5_H