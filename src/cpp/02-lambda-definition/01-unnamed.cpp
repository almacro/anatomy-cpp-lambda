#include<algorithm>
#include<vector>
#include<string>
int main() {
    std::vector vec { "alice", "bob", "charlie" };
    std::sort(vec.begin(), vec.end(),
    [] (const std::string& a, const std::string& b) {
        return a.length() < b.length();
    });
}
