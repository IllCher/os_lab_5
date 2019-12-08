#include <iostream>
#include "../lib/vecmd5.h"


int main() {
    vector v;
    std::string cmd;
    while (std::cin >> cmd) {
        try {
            if (cmd == "add") {
                std::string value;
                std::cin >> value;
                v.push_back(value);
            } else if (cmd == "rmv") {
                v.pop_back();
            } else if (cmd == "prt") {
                for (int i = 0; i < v.size(); i++) {
                    std::cout << v[i] << " ";
                }
            } else if (cmd == "ai") {
                int i;
                std::cin >> i;
                std::string value;
                std::cin >> value;
                v[i] = value;
            } else {
                std::cout << "Wrong command\n";
            }

        } catch (std::logic_error e) {
            std::cout << e.what() << "\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }
    return 0;
}

