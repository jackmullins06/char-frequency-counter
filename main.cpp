#include <iostream>
#include <map>

std::string promptForInput() {
    std::string input;

    while (true) {
        std::cout << "Please enter a string: " << std::endl;
        std::getline(std::cin, input);

        if (!input.empty()) {
            break;
        }

        std::cout << "Invalid input. Please try again." << std::endl;
    }

    return input;
}


std::map<char, int> countFrequency(std::string input) {
    std::map<char, int> letterFrequency;

    for (int i = 0; i < input.size(); ++i) {
        if (isalpha(input[i])) {
            letterFrequency[input[i]]++;
        }
    }

    return letterFrequency;
}

void iterateThroughMap(std::map<char, int> letterFrequency) {
    std::map<char, int>::iterator it = letterFrequency.begin();

    while (it != letterFrequency.end()) {
        char letter = it->first;
        int count = it->second;

        std::cout << letter << " : " << count << std::endl;

        it++;
    }
}

int main () {
    iterateThroughMap(countFrequency(promptForInput()));
    
    return 0;
}