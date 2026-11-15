#include <iostream>
#include "Person.h"
#include<vector>
using namespace std;

int main()
{
    //Luodaan vektori person luokan oliolle
    vector<Person> personList;
    Person objPerson = Person(" Teppo", " Testi");
    personList.push_back(objPerson);

    //Lisätään kaksi oliota listaan
    personList.emplace_back(Person(" Liisa", " Virta"));
    personList.emplace_back(Person(" Ville", " Joki"));

    //kysytään käyttäjältä henkilön etunimi ja sukunimi ja lisätään listaan
    string newfn;
    string newln;

    cout<<"Anna etunimi: ";
    cin>>newfn;

    cout<<"Anna sukunimi: ";
    cin>>newln;

    personList.emplace_back(Person(newfn, newln));

    cout<<"Personlistan oliot"<<endl;
    //tulostetaan kaikkien listan olioiden data
    for(Person objP: personList){
        objP.printData();
    }

    return 0;
}
