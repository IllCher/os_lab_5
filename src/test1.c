#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/vecmd5.h"


int main() {
    vector* v = vector_init();
    int cmd = 0;
    while (scanf("%d",&cmd) != EOF) {
        char* value = (char*)malloc(33);
        if (cmd == 1) {
            scanf("%s", value);
            value[32] = '\0';
            if (check(value)) {
                vector_add(v, value);
            } else {
                printf("It's not an MD5\n");
            }
        } else if (cmd == 2) {
            scanf("%s", value);
            if (check(value)) {
                vector_add(v, value);
            } else {
                printf("It's not an MD5\n");
            }
        } else {
            printf("Wrong command\n");
        }
        free(value);
    }
    vector_free(v);
    return 0;
}

