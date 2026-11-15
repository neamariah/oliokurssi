#include "person.h"


string Person::getFname() const
{
    return fname;
}

void Person::setFname(const string &newFname)
{
    fname = newFname;
}

string Person::getLname() const
{
    return lname;
}

void Person::setLname(const string &newLname)
{
    lname = newLname;
}

void Person::printData()
{
    cout<<"Etunimi="<<fname<<"Sukunimi="<<lname<<endl;
}

Person::Person()
{

}

Person::Person(string fn, string ln)
{
    fname=fn;
    lname=ln;
}
