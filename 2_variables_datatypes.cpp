#include <iostream>

int main()
{
    int x;     // Declaration
    x = 5;     // Assignment
    int y = 6; // Declaration and Assignment
    int sum = x + y;
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << "The sum is " << sum << "\n";

    // Integer -2**31 <= num <= 2**31-1 (whole number)
    int age = 21;
    int year = 2069;
    int days = 7.6; // days = 7

    // Double (number including decimal)
    double price = 6.99;
    double gpa = 3.5;
    double temperature = 97.98;

    // Single Character
    char grade = 'A';
    char initial = 'D';
    char dollarSign = '$';

    // Boolean (true or false)
    bool student = true;
    bool likePizza = true;
    bool forSale = false;

    // String (object that represents sequence of characters)
    std::string name = "Shathwik";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << "Hello " << name << "\n";

    // Const
    // The "Const" keyword specifies that a variable's value is
    // constant tells the compiler to prevent anything from
    // modifing it (read-only)
    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;
    std::cout << circumference << "cm" << "\n";

    const int lightSpeed = 299792458;

    return 0;
}