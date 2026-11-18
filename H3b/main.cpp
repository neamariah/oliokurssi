#include <iostream>
#include "dog.h"
#include "animal.h"

using namespace std;

int main()
{
    Animal myAnimal;
    Dog myDog;

    myAnimal.callOut();
    myDog.callOut();

    return 0;
}
