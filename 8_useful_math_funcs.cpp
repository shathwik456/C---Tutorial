#include <iostream>
#include <cmath>

int main()
{
    double x = 3;
    double y = 5;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(x, y);
    z = sqrt(169);
    z = abs(-y);
    z = round(3.99849);
    z = ceil(3.1);
    z = floor(3.99849);

    std::cout << z << "\n";

    return 0;
}