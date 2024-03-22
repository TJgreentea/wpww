#include "person.h"
Person* createPersonArray(int n){
  Person*Array=new Person[n];
  for (int i=0;i<n;++i){
    Array[i].name="Jone Doe";
    Array[i].age=0;
}
return Array;
}