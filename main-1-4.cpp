// main-1-4.cpp
#include <iostream>
#include "Person.h"

// Assuming function-1-4.cpp is compiled together with this file
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    // Create an initial PersonList
    PersonList original = createPersonList(2); // Assuming createPersonList is already defined
    original.people[0].name = "Alice";
    original.people[0].age = 30;
    original.people[1].name = "Bob";
    original.people[1].age = 25;

    // Perform a shallow copy
    PersonList copy = shallowCopyPersonList(original);

    // Demonstrating that changing the copy also changes the original
    copy.people[0].name = "Changed Name";

    std::cout << "Original List First Person's Name: " << original.people[0].name << std::endl;
    std::cout << "Copied List First Person's Name: " << copy.people[0].name << std::endl;

    

    return 0;
}
