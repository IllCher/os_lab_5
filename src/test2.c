#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include "lib/vecmd5.h"


int main() {
    vector* (*v_create)();
    void (*v_delete)(vector* v);
    void (*v_push)(vector* v, md5 val);
    void (*v_set)(vector* v, int i, md5 val);
    md5 (*v_get)(vector* v, int i);
    int (*v_get_size)(vector* v);
    int (*v_get_CAP)(vector* v);
    void (*v_set_size)(vector* v, int new_size);
    void (*v_set_CAP)(vector* v, int new_size);
    bool (*check)(char* val);
    char *err;

    void *libHandle;
    libHandle = dlopen("../cmake-build-debug/libos_lab_5_lib.so", RTLD_LAZY);
    if (!libHandle) {
        fprintf(stderr, "%s\n", dlerror());
        exit(-1);
    }
    v_create = dlsym(libHandle, "v_create");
    v_delete = dlsym(libHandle, "v_delete");
    v_push = dlsym(libHandle, "v_push");
    v_set = dlsym(libHandle, "v_set");
    v_get = dlsym(libHandle, "v_get");
    v_get_size = dlsym(libHandle, "v_get_size");
    v_get_CAP = dlsym(libHandle, "v_get_CAP");
    v_set_size = dlsym(libHandle, "v_set_size");
    v_set_CAP = dlsym(libHandle, "v_set_CAP");
    check = dlsym(libHandle, "check");
    err = dlerror();
    if(err) {
        fprintf(stderr, "%s\n", err);
        exit(-1);
    }


    vector* v = v_create();
    int c = 0;
    while (scanf("%d", &c) && c) {
        char value[33] = {'\0'};
        if (c == 1) {
            scanf("%s", value);
            value[32] = '\0';
            if ((*check)(value)) {
                (*v_push)(v, value);
            } else {
                printf("It's not an MD5\n");
            }
        } else if (c == 2) {
            for (int i = 0; i < (*v_get_size)(v); i++) {
                printf("%s ", (*v_get)(v, i));
            }
            printf("\n");
        } else if (c == 3) {
            int pos = 0;
            scanf("%d", &pos);
            scanf("%s", value);
            (*v_set)(v, pos, value);
        } else {
            printf("Wrong command\n");
        }
    }

    (*v_delete)(v);
    dlclose(libHandle);
    return 0;
}
