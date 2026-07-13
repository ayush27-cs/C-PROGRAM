#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> a >> b)) {
        return 1;
    }
    int sum = a + b;
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
