#include <dlfcn.h>
#include "/lib/vecmd5.h"
int main() {

    void *libHandle;
    libHandle = dlopen("/lib/libos_lab_5_lib.so", RTLD_LAZY);
    if (!libHandle) {
        fprintf(stderr, "%s\n", dlerror());
        exit(1);
    }


    if(err = dlerror()) {
        fprintf(stderr, "%s\n", err);
        exit(FAILURE);
    }
    std::cout << "a\n";
    return 0;
}

