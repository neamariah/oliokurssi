#include <iostream>
#include <vector>
#include "car.h"


using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Mercedes Benz","CLA", 2020);
    carList.emplace_back("Audi", "R8", 2019);
    carList.emplace_back("Saab", "900", 2000);

    carList[1].printData();

    for (int i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
    }

    return 0;
}
