#include<iostream>
int main() {
  auto square = [](int x) {
      return x * x;
  };
  std::cout << square (3);
}
