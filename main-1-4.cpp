// main-1-4.cpp
#include <iostream>
#include "Person.h"

// Forward declaration
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    // Assuming createPersonList is defined and creates a list of people named "Jane Doe" with age 1
    PersonList original = createPersonList(3); // Need to have the createPersonList function

    // Perform a shallow copy
    PersonList copy = shallowCopyPersonList(original);

    // Demonstrate that the copy is indeed shallow
    // Change the name and age of the first person in the original list
    original.people[0].name = "John Smith";
    original.people[0].age = 30;

    // Display the first person from both lists to show they have been updated
    std::cout << "Original first person: " << original.people[0].name << ", " << original.people[0].age << std::endl;
    std::cout << "Copied first person: " << copy.people[0].name << ", " << copy.people[0].age << std::endl;

    
    delete[] original.people; 

    return 0;
}
