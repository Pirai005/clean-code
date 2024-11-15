#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> getNamesStartingWith(const std::vector<std::string>& names, char startingChar)
{
    std::vector<std::string> result;
    for (const auto& name : names) {
        if (name.front() == startingChar) {
            result.push_back(name);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> names = {"Bosch", "Robert", "Lenovo", "Bengaluru"};
    char startingChar = 'B';
    std::vector<std::string> namesStartingWith = getNamesStartingWith(names, startingChar);

    for (const auto& name : namesStartingWith) {
        std::cout << name << std::endl;
    }

    return 0;
}
