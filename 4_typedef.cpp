#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
typedef int number_t;

int main()
{
    // typedef = reversed keyword used to create an additional name
    // (alias) for another data type.
    // New identifier for an existing type
    // Helps with readability and reduces typos
    // Use when there is a clear benefit
    // Replaced with 'using' (work better w/ templates)
    text_t name = "Shathwik";
    std::cout << name << "\n";

    number_t age = 17;
    std::cout << age << "\n";

    return 0;
}