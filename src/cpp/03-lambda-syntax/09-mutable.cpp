int main() {
    /*
    error: increment of read-only variable 'count'
    auto counter = [count = 0] {
        return count++;
    };
    */

    // OK
    auto counter = [count = 0]() mutable {
        return count++;
    };
}
