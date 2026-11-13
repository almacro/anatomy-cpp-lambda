#include<vector>

// std::generate requires a callable to produce values.
// In C++, anything invokable with () is a Callable.

int main() {
    std::vector<int> vec;
    vec.resize(5);
    std::generate(vec.begin(), vec.end(),
        [count = 0]() mutable {
            return count++;
    });

    for(const auto &n: vec) {
        std::cout << n << " "; 
    }
    std::cout << "\n";
}
