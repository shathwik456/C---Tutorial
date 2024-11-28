#include <iostream>

int main()
{
    // Type Conversion = conversion of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type
    int x = 3.14;         // Implicit type conversion
    double y = (int)3.14; // Explicit type conversion
    char b = 100;         // stores value 'b' in the variable

    int correct = 8;
    int question = 10;
    double score = (double)correct / question * 100;
    std::cout << score << "%\n";

    return 0;
}