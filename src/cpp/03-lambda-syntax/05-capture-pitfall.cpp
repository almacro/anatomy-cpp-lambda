#include<iostream>

// the most common pitfall

// Capturing all by reference can be a cause of big trouble,
// when the variables referenced are destroyed
// before they are used.

auto createLambda(std::string str) {
    return [&] {
        std::cout << str << std::endl;
    };
}

int main() {
    auto lambda = createLambda("hi");
    lambda();
    
    return 0;
}
