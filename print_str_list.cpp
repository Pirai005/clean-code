#include <iostream>
#include <vector>
#include <string>

void printString()
{
    std::vector<std::string> names = {"Bosch", "Robert","Lenovo", "Bengaluru"};

    for (const auto& name : names) {
        if (name.front() == 'B') {
            std::cout << name << std::endl;
        }
    }
}

int main() {
    printString();
    return 0;
}
