#include<iostream>
#include<format>

int main() {
    auto isAboveAge = [threshold = 18] (int age) {
        return age >= threshold;
    };
    std::cout << std::format("{}\n", isAboveAge(15));
    std::cout << std::format("{}\n", isAboveAge(20));
}
