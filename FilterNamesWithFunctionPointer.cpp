#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool startswith(const std::string& name, char criteriaChar) {
    return !name.empty() && name.front() == criteriaChar;
}

bool endswith(const std::string& name, char criteriaChar) {
    return !name.empty() && name.back() == criteriaChar;
}

std::vector<std::string> getNamesMatchingWith(const std::vector<std::string>& names, 
    bool (*predicate)(const std::string&, char), char criteriaChar)
{
    std::vector<std::string> result;
    for (const auto& name : names) {
        if (predicate(name, criteriaChar)) {
            result.push_back(name);
        }
    }
    return result;
}

void printNames(const std::vector<std::string>& names) {
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }
}

int main() {
    
    std::vector<std::string> names = {"Bosch", "Robert", "Lenovo", "Bengaluru", "Alabama", "Anaconda"};

    char startingChar = 'B';
    char endingChar = 'a';

    std::vector<std::string> namesStartingWith = getNamesMatchingWith(names, startswith, startingChar);
    std::vector<std::string> namesEndingWith = getNamesMatchingWith(names, endswith, endingChar);

    printNames(namesStartingWith);
    printNames(namesEndingWith);


    return 0;
}
