#include<iostream>

// The syntax [this] is used to capture data
// from the current object the lambda is placed in.

struct MyStruct {
    int x = 1;

    MyStruct() {
        auto printX = [this] {
            std::cout << x << std::endl;
        };

        // does not compile: x is not a local variable
        auto printX2 = [x] {
            std::cout << x << std::endl;
        };
    }
};
