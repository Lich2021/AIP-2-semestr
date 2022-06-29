#include <iostream>

int main()
{
    float x1, x2;
    char Operaciya;
    setlocale(LC_ALL, "Rus");
    std::cout << "Ââåäèòå òèï îïåðàöèè è 2 ÷èñëà ÷åðåç ïðîáåë" << std::endl;

    std::cin >> Operaciya >> x1 >> x2;
    if (Operaciya == '/') {
        std::cout << x1 / x2;
    }
    if (Operaciya == '*') {
        std::cout << x1 * x2;
    }
    if (Operaciya == '-') {
        std::cout << x1 - x2;
    }
    if (Operaciya == '+') {
        std::cout << x1 + x2;
    }
}
