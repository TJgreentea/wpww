// main-1-4.cpp
#include <iostream>
#include "Person.h"

// Forward declarations
PersonList shallowCopyPersonList(PersonList pl);
PersonList createPersonList(int n); // Forward declaration for createPersonList

int main() {
    // Create an original PersonList
    PersonList original = createPersonList(3);

    // Perform a shallow copy
    PersonList copy = shallowCopyPersonList(original);

    // Modify the original list
    original.people[0].name = "John Smith";
    original.people[0].age = 30;

    // Display the effect of modification on both the original and copied lists
    std::cout << "Original first person: " << original.people[0].name << ", " << original.people[0].age << std::endl;
    std::cout << "Copied first person (shallow copy): " << copy.people[0].name << ", " << copy.people[0].age << std::endl;

    // Clean up allocated memory for the original list
    delete[] original.people;

    return 0;
}

