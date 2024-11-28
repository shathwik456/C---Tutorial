#include <iostream>

int main()
{
    int temperature = 33;
    bool isSunny = true;

    temperature >= 15 and temperature <= 35 ? std::cout << "Temperature is good!\n" : std::cout << "Temperature is bad\n";

    temperature < 15 || temperature > 35 ? std::cout << "Temperature is bad\n" : std::cout << "Temperature is good!\n";

    !isSunny ? std::cout << "It is not sunny\n" : std::cout << "It is sunny\n";

    return 0;
}