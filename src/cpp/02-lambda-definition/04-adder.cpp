#include<iostream>

// A function object (or functor)
// is any object that can be invoked
// like a function, meaning it overloads
// the operator() so you can call it with
// parentheses.

struct Adder {
    int operator()(int a, int b) const {
        return a + b;
    }
};

int main(){
    Adder adder;
    std::cout << adder(2, 3);
}
