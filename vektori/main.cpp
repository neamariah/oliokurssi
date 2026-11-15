#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> luvutVektori;
    int luku = 1;
    while(luku != 99){
        cout<<"Anna luku (lopeta antamalla luku 99)"<<endl;
        cin>>luku;
        luvutVektori.push_back(luku);
    }
    cout << "Vektorissa on luvut:  " << endl;
    for(int vluku: luvutVektori){
        if(vluku != 99)
        cout<<vluku<<"  ";
    }

    cout<<endl;
    return 0;
}
