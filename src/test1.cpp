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
                if (v.empty()) {
                    std::cout << "Empty\n";
                } else {
                    for (int i = 0; i < v.size(); i++) {
                        std::cout << v[i] << " ";
                    }
                    std::cout <<"\n";
                }
            } else if (cmd == "ai") {
                int i;
                std::cin >> i;
                std::string value;
                std::cin >> value;
                v.replace(value, i);
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

