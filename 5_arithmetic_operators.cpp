#include <iostream>

int main()
{
    // Arithmetic Operator = return the result of a
    // specific arithmetic operation (+ - * / %)

    int students = 20;
    // students = students + 1;
    // students += 1;
    students++;

    // students = students - 1;
    // students -= 1;
    students--;

    // students = students * 2;
    students *= 2;

    // students = students / 2;
    students /= 2;

    // int remainingStudents = students % 3;
    // std::cout << remainingStudents << "\n";

    int solution = 6 - 5 + 4 * 3 / 2;    // -> Output = 7
    int solution2 = 6 - (5 + 4) * 3 / 2; // -> Output = -7

    return 0;
}