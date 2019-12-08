#include "vecmd5.h"


bool vector::full(){
    return (this->logic == this->Rsize);
}


void vector::change(){
    int newSize = this->Rsize << 1;
    newSize++;

    std::string * aux = new std::string[newSize];

    for(int i=0;i<this->logic;i++) aux[i] = this->body[i];


    delete[] this->body;

    this->body = aux;
    this->Rsize = newSize;
}


vector::vector(){
    this->body = nullptr;
    this->logic = 0;
    this->Rsize = 0;
}


vector::~vector(){
    delete[] this->body;
    this->logic = 0;
    this->Rsize = 0;
}


bool vector::empty(){
    return (this->logic == 0);
}


void vector::push_back(std::string val){
    if(this->full()){
        this->change();
    }

    this->body[this->logic] = val;
    this->logic++;
}


void vector::pop_back(){
    this->logic--;
}


int vector::size(){
    return (this->logic);
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

