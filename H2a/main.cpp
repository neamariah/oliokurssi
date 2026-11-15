#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
    Car myCar;
    myCar.setBrand("Audi");
    myCar.setModel("R8");
    myCar.setYearModel(2019);

    myCar.printData();


Rectangle* objRectangle = new Rectangle();
objRectangle->setHeight(3.0);
objRectangle->setWidth(5.0);

    cout<<"Suorakulmion pinta-ala: "<<objRectangle->getArea()<<endl;
    cout<<"Suorakulmion ymparysmitta: "<<objRectangle->getCircum()<<endl;

    delete objRectangle;

    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Mikko");
    objStudent->setStudentNumber(1234);
    objStudent->setAverage(8.5);

    cout<<"Nimi: "<<objStudent->getName()<<endl;
    cout<<"Opiskelijanumero: "<<objStudent->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<objStudent->getAverage()<<endl;

    return 0;
}
