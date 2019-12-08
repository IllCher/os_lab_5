#include "vecmd5.h"


bool vector::full(){
    return (this->vsize == this->cap);
}


void vector::change(){
    int newSize = this->cap *= 2;
    newSize++;

    std::string * aux = new std::string[newSize];

    for(int i=0;i<this->vsize;i++) aux[i] = this->body[i];


    delete[] this->body;

    this->body = aux;
    this->cap = newSize;
}


vector::vector(){
    this->body = nullptr;
    this->vsize = 0;
    this->cap = 0;
}


vector::~vector(){
    delete[] this->body;
    this->vsize = 0;
    this->cap = 0;
}


bool vector::empty(){
    return (this->vsize == 0);
}

void vector::replace(std::string& val, int index){
    if (index == vsize) {
        push_back(val);
    } else if (index < vsize) {
        this->body[index] = val;
    } else {
        std::cout << "Out of bounds\n";
    }
} 

void vector::push_back(std::string& val){
    if(this->full()){
        this->change();
    }

    this->body[this->vsize] = val;
    this->vsize++;
}


void vector::pop_back(){
    this->vsize--;
}


int vector::size(){
    return (this->vsize);
}


std::string& vector::operator[](int index){
    return this->body[index];
}

/*bool vector::check(std::string val) {
    for (int i = 0; i < 17; i++) {
        if (!isalpha(val[i]) && !isdigit(val[i])) {
            std::cout << "Wrong MD5\n";
            return false;
        }
    }
    return true;
}*/

