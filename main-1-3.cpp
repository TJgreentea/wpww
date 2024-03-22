
#include <iostream>
#include "Person.h"


PersonList deepCopyPersonList(PersonList pl);

int main() {
    // Create an initial PersonList
    PersonList original = createPersonList(2); 
    original.people[0].name = "Alice";
    original.people[0].age = 30;
    original.people[1].name = "Bob";
    original.people[1].age = 25;

    // Perform a deep copy
    PersonList copy = deepCopyPersonList(original);

    // Print both lists to demonstrate they are identical yet independent
    std::cout << "Original List:\n";
    for (int i = 0; i < original.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << original.people[i].name << ", Age = " << original.people[i].age << std::endl;
    }

    std::cout << "\nCopied List:\n";
    for (int i = 0; i < copy.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << copy.people[i].name << ", Age = " << copy.people[i].age << std::endl;
    }

    
    delete[] original.people;
    delete[] copy.people;

    return 0;
}
