#include <iostream>

using namespace std;

void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
float retDiv(int a, int b);

int main()
{
    int a;
    int b;

    cout << "Anna yksi kokonaisluku" << endl;
    cin>>a;

    cout<< "Anna toinen kokonaisluku"<< endl;
    cin>>b;


    calcSum(a,b);
    calcDiv(a,b);

    int sum = retSum(a,b);
    cout << "Palautettu summa: " << sum << endl;

    float result;

    try {
        result = retDiv(a,b);
        cout << a << "/" << b << " = " << result << endl;
    }
    catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }


    return 0;
}

void calcSum(int a, int b){

    cout << "Luvut ovat yhteensa " << a+b << endl;

}

void calcDiv(int a, int b){

    if (b == 0){
    cout << "Error 404" << endl;
}
else {

    cout << "Lukujen osamaara on " << (float)a / b << endl;
    }
}

int retSum(int a, int b)
{
    return a+b;
}

float retDiv(int a, int b)
{
    if(b==0){
    throw std::runtime_error("jakaja ei saa olla nolla!");
}

    return(float)a/b;
}











