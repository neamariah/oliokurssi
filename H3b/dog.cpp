#include "dog.h"
#include <iostream>

using namespace std;

Dog::Dog() {}

void Dog::callOut(){
    cout<< "Koira haukkuu!" <<endl;
}

Dog::~Dog(){
    cout<<"Dog destruktori" <<endl;
}
