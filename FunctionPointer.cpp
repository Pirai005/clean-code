#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <sstream>

using namespace std;

function<bool(const string&)> startswithPredicateGenerator(char letter) {
    return [letter](const string& item) -> bool { 
        return !item.empty() && item[0] == letter;
    };
}

std::vector<std::string> findStrings(const std::vector<std::string>& strings, const std::function<bool(const std::string&)>& condition) {
    std::vector<std::string> result;
    for (const std::string& str : strings) {
        if (condition(str)) {
            result.push_back(str);
        }
    }
    return result;
}

std::string FormattedString(const std::vector<std::string>& vec) {
    std::ostringstream oss;
    for (const std::string& str : vec) {
        oss << str << "\n";
    }
    return oss.str();
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "cherry", "date", "elderberry"};

    char letter = 'a';
    std::function<bool(const std::string&)> letterCondition = startswithPredicateGenerator(letter);
    std::vector<std::string> foundStrings = findStrings(strings, letterCondition);
    std::cout << "Strings starting with the letter '" << letter << "':" << std::endl;
    std::cout << FormattedString(foundStrings);
    return 0;
}
