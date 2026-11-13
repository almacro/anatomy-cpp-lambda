#include<iostream>

// capture by reference (use)

int main() {
    int x = 3;

    auto printX = [&x] {
        std::cout << x << std::endl;
    };
    x = 4;
    printX();
}
