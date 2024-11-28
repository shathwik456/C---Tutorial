#include <iostream>

int main()
{
    // Ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2

    int grade = 69;
    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail:(\n";

    // Odd or even program
    int num = 8;
    num % 2 == 0 ? std::cout << "Even\n" : std::cout << "Odd\n";

    return 0;
}