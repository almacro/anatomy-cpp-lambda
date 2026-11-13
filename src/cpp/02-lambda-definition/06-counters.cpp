#include<algorithm>
#include<iostream>
#include<vector>

// Why overload the operator()?
// To inject it into an algorithm
// that takes a function object, you 
// need to provide something that 
// can be invoked.

struct SimpleCounter {
    int x = 0;

    int count() {
        return x++;
    }
};

struct Counter {
    int count = 0;
    int operator() () {
        return count++;
    }
};

int main(){
    SimpleCounter counter1;
    std::cout << counter1.count() << " ";
    std::cout << counter1.count() << " ";
    std::cout << counter1.count() << " ";
    std::cout << "\n";

    std::vector<int> vec;
    vec.resize(5);

    Counter counter;
    std::generate(vec.begin(), vec.end(), counter);

    for(const auto &n: vec) {
        std::cout << n << " "; 
    }
    std::cout << "\n";
}
