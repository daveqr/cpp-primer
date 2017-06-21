#include <iostream>

int main() {
    int sum2 = 0, val = 1;

    while (val <= 10) {
        sum2 += val;
        ++val;
    }

    std::cout << "Sum of 1 to 10 inclusive is "
              << sum2 << std::endl;
    return 0;
}