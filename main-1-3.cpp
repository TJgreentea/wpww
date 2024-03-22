// main-1-3.cpp
#include <iostream>
#include "Person.h"

// Forward declaration
PersonList deepCopyPersonList(PersonList pl);

int main() {
    // Create and populate a PersonList
    PersonList original = createPersonList(3); // Assuming createPersonList is defined elsewhere

    // Create a deep copy of the original PersonList
    PersonList copy = deepCopyPersonList(original);

    // Display the original and copied PersonList
    for (int i = 0; i < original.numPeople; ++i) {
        std::cout << "Original Person " << i << ": " << original.people[i].name << ", " << original.people[i].age << std::endl;
        std::cout << "Copied Person " << i << ": " << copy.people[i].name << ", " << copy.people[i].age << std::endl;
    }

    
    delete[] original.people;
    delete[] copy.people;

    return 0;
}
