#ifndef OS_LAB_5_VECMD5_H
#define OS_LAB_5_VECMD5_H
#include <iostream>
#include <string>
#include <utility>

class vector{
private:
    std::string* body;
    int vsize;
    int cap;

    bool full();
    void change();
public:
    vector();
    ~vector();
    bool empty();
    void replace(std::string& val, int index);
    void push_back(std::string& val);
    void pop_back();
    int size();
    std::string& operator[](int index);

};



#endif //OS_LAB_5_VECMD5_H