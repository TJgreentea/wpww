// main-1-3.cpp
#include <iostream>
#include "Person.h"

// Forward declarations
PersonList createPersonList(int n); // Ensure this function is recognized
PersonList deepCopyPersonList(PersonList pl); // Declaration for the deep copy function

int main() {
    // Create an original PersonList with dummy data
    PersonList original = createPersonList(3); // Adjust n as needed

    // Perform a deep copy of the original list
    PersonList copied = deepCopyPersonList(original);

    // Modify the original list to demonstrate independence from the copied list
    original.people[0].name = "Changed Name";
    original.people[0].age = 99;

    // Display the contents of the original and copied lists to verify the deep copy
    std::cout << "Original list:" << std::endl;
    for (int i = 0; i < original.numPeople; ++i) {
        std::cout << "Person " << i << ": " << original.people[i].name << ", " << original.people[i].age << std::endl;
    }

    std::cout << "\nCopied list (after modification to original):" << std::endl;
    for (int i = 0; i < copied.numPeople; ++i) {
        std::cout << "Person " << i << ": " << copied.people[i].name << ", " << copied.people[i].age << std::endl;
    }

    // Clean up allocated memory
    delete[] original.people;
    delete[] copied.people;

    return 0;
}
