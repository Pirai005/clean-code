#include <iostream>
#include <vector>
#include <string>

void printNamesStartingWithB(std::vector<std::string>& names)
{
    for (const auto& name : names) {
        if (name.front() == 'B') {
            std::cout << name << std::endl;
        }
    }
}

int main() {
    std::vector<std::string> names = {"Bosch", "Robert","Lenovo", "Bengaluru"};
    printNamesStartingWithB(names);
    return 0;
}
