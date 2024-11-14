#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> names = {"Bosch", "Robert","Lenovo", "Bengaluru"};

    for (const auto& name : names) {
        if (name.front() == 'B') {
            std::cout << name << std::endl;
        }
    }
    
    return 0;
}
