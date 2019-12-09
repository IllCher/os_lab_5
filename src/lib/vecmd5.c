#include "vecmd5.h"


vector* vector_init() {
    vector* v = (vector*)malloc(sizeof(vector));
    v->capacity = 4;
    v->total = 0;
    v->items = malloc(33 * v->capacity);
    for (int i = 0; i < v->capacity; i++) {
        v->items[i] = "\0";
    }
    return v;
}

int vector_total(vector* v) {
    return v->total;
}

static void vector_resize(vector* v, int capacity) {

    char** items = realloc(v->items, 33 * capacity);
    if (items) {
        v->items = items;
        v->capacity = capacity;
    }
}

void vector_add(vector* v, char* item) {
    if (v->capacity == v->total)
        vector_resize(v, v->capacity * 2);
    int size = v->total;
    int i = 0;
    while (item[i] != '\0') {
        v->items[size][i] = item[i];
    }
    //strcpy(v->items[size], item);
    v->total++;
}

void vector_set(vector* v, int index, char* item) {
    if (index >= 0 && index < v->total)
        strcpy(v->items[index], item);
}

char* vector_get(vector* v, int index) {
    if (index >= 0 && index < v->total)
        return v->items[index];
    return NULL;
}

void vector_delete(vector* v, int index) {
    if (index < 0 || index >= v->total)
        return;

    v->items[index] = NULL;

    for (int i = index; i < v->total - 1; i++) {
        v->items[i] = v->items[i + 1];
        v->items[i + 1] = NULL;
    }

    v->total--;

    if (v->total > 0 && v->total == v->capacity / 4)
        vector_resize(v, v->capacity / 2);
}

void vector_free(vector* v) {
    free(v->items);
}



bool check(char* val) {
    for (int i = 0; i < 32; i++) {
        if (!isalpha(val[i]) && !isdigit(val[i])) {
            return false;
        }
    }
    return true;
}

