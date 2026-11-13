#include<iostream>

// Unlike normal functions, function objects
// can hold state because they are objects
// with member variables

struct Counter {
    int count = 0;

    int operator() () {
        return count++;
    }
};

int main(){
    Counter counter;
    std::cout << counter() << std::endl;
    std::cout << counter() << std::endl;
    std::cout << counter() << std::endl;
}
