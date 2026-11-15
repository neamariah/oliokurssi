#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
private:
    string fname;
    string lname;

public:
    Person();
    Person(string fn, string ln);
    string getFname() const;
    void setFname(const string &newFname);
    string getLname() const;
    void setLname(const string &newLname);
    void printData();
};

#endif // PERSON_H
