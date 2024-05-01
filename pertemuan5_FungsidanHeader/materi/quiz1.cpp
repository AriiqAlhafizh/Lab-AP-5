#include <iostream>
#include <cmath>
using namespace std;

int pangkat(int angka, int pangkat2){
    return pow(angka,pangkat2);
}

main() {
    system("CLS");
    int pangkat2;

    cout<<"masukkan pangkat: "; cin>>pangkat2;
    
    cout<<pangkat(3,pangkat2)<<endl;
    cout<<pangkat(6,pangkat2)<<endl;
    cout<<pangkat(9,pangkat2)<<endl;
    cout<<pangkat(12,pangkat2)<<endl;
}