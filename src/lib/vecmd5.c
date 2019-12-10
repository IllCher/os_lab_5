#include "vecmd5.h"

vector* v_create() {
    vector* v = (vector*)malloc(sizeof(vector));
    v->body = NULL;
    v->size = 0;
    v->CAP = 1;
    return v;
}

void v_delete(vector* v) {
    for (int i = 0; i < v_get_size(v); i++) {
        free(v->body[i]);
    }
    free(v->body);
    free(v);
}
void v_push(vector* v, md5 val) {
    int size = v_get_size(v);
    if (size + 1 == v_get_CAP(v)) {
        v->CAP *= 2;
        v_set_CAP(v, v->CAP);
        v->body[size] = (md5) malloc(33);
        strcpy(v->body[size], val);
        v_set_size(v, size + 1);
    } else {
        v->body[size] = (md5) malloc(33);
        strcpy(v->body[size], val);
        v_set_size(v, size + 1);
    }
}

void v_set(vector* v, int i, md5 val) {
    if (i > v_get_size(v)) {
        printf("Out of bounds\n");
    } else if (v_get_size(v) + 1 == v_get_CAP(v)) {
        v->CAP *= 2;
        v_set_CAP(v, v->CAP);
        int size = v_get_size(v);
        v_set_size(v, size + 1);
        v->body[i] = (md5)malloc(33);
        strcpy(v->body[i], val);
    } else if (i == v_get_size(v)) {
        v->body[i] = (md5) malloc(33);
        strcpy(v->body[i], val);
        v_set_size(v, i + 1);
    } else {
        strcpy(v->body[i], val);
    }

}

md5 v_get(vector* v, int i) {
    return v->body[i];
}

int v_get_size(vector* v) {
    return v->size;
}

int v_get_CAP(vector* v) {
    return v->CAP;
}

void v_set_size(vector* v, int new_size) {
    v->size = new_size;
}
void v_set_CAP(vector* v, int new_size) {
    md5* reBody = (md5*)realloc(v->body, new_size * sizeof(md5));
    v->body = reBody;
}


bool check(char* val) {
    for (int i = 0; i < 32; i++) {
        if (!isalpha(val[i]) && !isdigit(val[i])) {
            return false;
        }
    }
    return true;
}

