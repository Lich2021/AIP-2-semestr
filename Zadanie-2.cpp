#include <iostream>

float num, num1, num2;

int main() {

    std::cin >> num >> num1 >> num2;
    float a = num * 2;
    float b = num1 / 3;
    float c = num2 * num2;
    std::cout << "S=" << a + b + c << std::endl;

    return 0;
}
