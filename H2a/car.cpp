#include "car.h"

void Car::setBrand(string newBrand){
    brand = newBrand;
}

void Car::setModel(string newModel){
    model = newModel;
}

void Car::setYearModel(int newYear){
    yearModel = newYear;
}

void Car::printData()

{

    cout<<"Merkki: " << brand << endl;
    cout<<"Malli: "<< model << endl;
    cout<<"Vuosimalli: "<<yearModel<<endl;
}

Car::Car() {}


