#include <iostream>
#include <cmath>
using namespace std;

main() {
    system("CLS");
    int angka,i;
    bool prima;
    
    cout<<"masukkan angka: "; cin>>angka;
    cout<<endl;

    for (i=2; i<=round(0.5*angka); i++){
        if (angka%i==0){
            prima = false;
        }
    }
    
    if (prima==false) {
        cout<<angka<<" bukan merupakan bilangan prima";
    } else {
        cout<<angka<<" merupakan bilangan prima";
    }



}