#include<iostream>
#include<string>

struct {
    std::string str;
    void operator() () {
        std::cout << str << std::endl;
    }
} sayHi { "Hi" };

int main(){
    sayHi();
}
