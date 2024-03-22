// function-1-4.cpp
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.numPeople = pl.numPeople;
    copy.people = pl.people; // Shallow copy: both lists share the same array of Person structs
    return copy;
}
