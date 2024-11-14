#include <iostream>
#include <vector>
#include <string>

void compare_print_string()
{
    std::vector<std::string> names = {"Bosch", "Robert","Lenovo", "Bengaluru"};

    for (const auto& name : names) {
        if (name.front() == 'B') {
            std::cout << name << std::endl;
        }
    }
}

int main() {
    compare_print_string();
    return 0;
}
