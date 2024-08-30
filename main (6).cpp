#include <iostream>

int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int first = 1, last = 10;
    std::cout << "Sum from " << first << " to " << last << " is " << sum_from_to(first, last) << std::endl;
    return 0;
}
