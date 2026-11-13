#include<iostream>
int main() {
    int x = 1;
    int y = 2;

    auto myLambda = [x, &y] {
        std::cout << x << y << std::endl;
    };

    myLambda();
}
