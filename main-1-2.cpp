// main-1-2.cpp
#include <iostream>
#include "Person.h"

// Assuming function-1-2.cpp is compiled together with this file
PersonList createPersonList(int n);

int main() {
    int n = 3; 
    PersonList personList = createPersonList(n);

    for (int i = 0; i < personList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << personList.people[i].name
                  << ", Age = " << personList.people[i].age << std::endl;
    }

    delete[] personList.people;

    return 0;
}
