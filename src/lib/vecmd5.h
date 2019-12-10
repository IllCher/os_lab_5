#ifndef OS_LAB_5_VECMD5_H
#define OS_LAB_5_VECMD5_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef char* md5;
typedef struct {
    md5* body;
    int size;
    int CAP;
} vector;

vector* v_create();
void v_delete(vector* v);
void v_push(vector* v, md5 val);
void v_set(vector* v, int i, md5 val);
md5 v_get(vector* v, int i);
int v_get_size(vector* v);
int v_get_CAP(vector* v);
void v_set_size(vector* v, int new_size);
void v_set_CAP(vector* v, int new_size);
bool check(char* val);
#endif //OS_LAB_5_VECMD5_H