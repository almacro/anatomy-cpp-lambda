#include<iostream>
#include<vector>
#include<algorithm>

struct IsAboveAverage {
    int threshold;
    IsAboveAverage(int t) : threshold(t) {}

    bool operator()(int age) const {
        return age >= threshold;
    }
};

int main() {
    std::vector<int> ages { 20, 10, 18, 5, 35 };
    IsAboveAverage isAdult(18);
    std::cout << std::count_if(ages.begin(), ages.end(), isAdult);
}
