#include <iostream>
#include <dlfcn.h>
#include "/lib/vecmd5.h"
int main() {
    void (*replace)(BST *root, ElemType newKey);
    BST (*TreeFind)(BST root, ElemType key);
    BST (*TreeRemove)(BST root, ElemType key);
    void (*TreePrint)(BST root);
    void (*TreeDestroy)(BST root);
    char *err;

    void *libHandle;
    libHandle = dlopen("libbst.so", RTLD_LAZY);
    if (!libHandle) {
        fprintf(stderr, "%s\n", dlerror());
        exit(FAILURE);
    }

    TreeInsert = dlsym(libHandle, "TreeInsert");
    TreeRemove = dlsym(libHandle, "TreeRemove");
    TreeFind = dlsym(libHandle, "TreeFind");
    TreePrint = dlsym(libHandle, "TreePrint");
    TreeDestroy = dlsym(libHandle, "TreeDestroy");

    if(err = dlerror()) {
        fprintf(stderr, "%s\n", err);
        exit(FAILURE);
    }
    std::cout << "a\n";
    return 0;
}

