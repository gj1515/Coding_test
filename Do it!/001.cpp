#include <iostream>
#include <vector>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::string input;
    std::cin >> input;

    std::vector<int> array;
    
    for (char c : input) {
        array.push_back(c - '0');
    }

    int answer = 0; 
    int answer2 = 0;

    for (int i = 0; i < array.size(); i++) {
        answer += array[i];
    }

    for (int i : array){
        answer2 += i;
    }

    std::cout << answer << std::endl;
    std::cout << answer2 << std::endl;

    return 0;
}