// main-1-1.cpp
#include <iostream>
#include "Person.h"


Person* createPersonArray(int n);

int main() {
    int n = 3; // Example size
    Person* people = createPersonArray(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i << ": " << people[i].name << ", " << people[i].age << std::endl;
    }

    delete[] people; 
    return 0;
}
