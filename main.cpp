#include <iostream>
#include <string>
#include <map>
#include <stdio.h>

std::string firstWord(const std::string& line) {
    return line.substr(0, line.find(' '));
}

int main() {
    unsigned int n; std::cin >> n;
    std::map<std::string, int> countries;
    std::string txt;
    std::cin.ignore();

    for(unsigned int i = 0; i < n; i++) {
        getline(std::cin, txt);
        countries[firstWord(txt)]++;
    }

    for(auto & countrie : countries) {
        std::cout << countrie.first << " " << countrie.second << std::endl;
    }

    return 0;
}
