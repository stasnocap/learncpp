//
// Created by КапитанС on 11/28/2023.
//

#include <iostream>

int readNumber() {
    std::cout << "Enter number: ";

    int num{};
    std::cin >> num;

    return num;
}

void writeAnswer(int num) {
    std::cout << "Answer: " << num << '\n';
}