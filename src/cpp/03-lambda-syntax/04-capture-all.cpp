#include<iostream>

// capture all

// When you need to capture multiple variables,
// the capture list can grow and become difficult
// to manage. You can express that you want to 
// capture anything the lambda wants to use by 
// using = (by value) or & (by reference).

int main() {
    int a = 1;
    int b = 2;
    int c = 3;

    auto printABC = [=] {
        std::cout << a << ", " << b << ", " << c << std::endl;
    };
    printABC();
}
