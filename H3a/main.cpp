#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef objChef("Gordon Ramsay");
    objChef.makeSalad();
    objChef.makeSoup();

    ItalianChef objItalianChef("Anthony Bourdain");
    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();

    cout << objItalianChef.getName() << endl;

    return 0;
}
