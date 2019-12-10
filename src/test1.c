#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/vecmd5.h"


int main() {
    vector* v = v_create();
    int c = 0;
    while (scanf("%d", &c) && c) {
        char value[33] = {'\0'};
        if (c == 1) {
            scanf("%s", value);
            value[32] = '\0';
            if (check(value)) {
                v_set(v, v->size, value);
            } else {
                printf("It's not an MD5\n");
            }
        } else if (c == 2) {
            for (int i = 0; i < v_get_size(v); i++) {
                printf("%s ", v_get(v, i));
            }
            printf("\n");
        } else if (c == 3) {
            int pos = 0;
            scanf("%d", &pos);
            scanf("%s", value);
            v_set(v, pos, value);
        } else {
            printf("Wrong command\n");
            break;
        }
    }
    v_delete(v);
    return 0;
}

