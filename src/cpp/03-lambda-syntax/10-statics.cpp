#include<iostream>

static int count = 0;

auto counter = []
{
    return count++;
};

int main() {
    std::cout << counter() << std::endl;
    std::cout << counter() << std::endl;
    std::cout << counter() << std::endl;
}
