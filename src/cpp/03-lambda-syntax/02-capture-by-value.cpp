#include<iostream>

// capture by value (copy)

int main() {
    int x = 3;

    auto printX = [x] {
        std::cout << x << std::endl;
    };
    x = 4;
    printX();
}
