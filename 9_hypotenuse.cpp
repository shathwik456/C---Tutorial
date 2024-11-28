#include <iostream>
#include <cmath>

int main()
{
    double a, b, hyp;
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;
    a = pow(a, 2);
    b = pow(b, 2);
    hyp = sqrt(a + b);
    std::cout << "Hypotenuse is " << hyp << "\n";

    return 0;
}