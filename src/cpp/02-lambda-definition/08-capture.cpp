#include<iostream>
int main() {
    int x = 3;

    auto printX = [x] {
        std::cout << x;
    };

    printX();
}
