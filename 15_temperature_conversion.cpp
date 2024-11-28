#include <iostream>

int main()
{
    double temperature;
    char unit;

    std::cout << "******** Temperature ********\n";
    std::cout << "F = Fahrenheit\nC = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temperature;

        temperature = (1.8 * temperature) + 32;
        std::cout << "Temperature is: " << temperature << "\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temperature;

        temperature = (temperature - 32) / 1.8;
        std::cout << "Temperature is: " << temperature << "\n";
    }
    else
    {
        std::cout << "Please enter in only C or F\n";
    }
    std::cout << "*****************************\n";

    return 0;
}