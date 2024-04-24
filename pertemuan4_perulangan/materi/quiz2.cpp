#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int panjang,lebar,i,j;

    cout<<"masukkan panjang: "; cin>>panjang;
    cout<<"masukkan lebar: "; cin>>lebar;

    for (i=0; i<lebar; i++){
        for (j=0; j<panjang; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}