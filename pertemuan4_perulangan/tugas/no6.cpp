#include <iostream>
#include <cmath>
using namespace std;

main() {
    system("CLS");
    int angka, jumlah, i;
    
    cout<<"masukkan angka yang lebih dari 0: "; cin>>angka;
    if (angka<=0) exit(0);
    cout<<endl;

    for (i=1; i<=angka; i++){
        if (i%2==0){
            jumlah+=pow(i,2);
        }
    }
    
    cout<<"jumlah semua kuadrat bilangan genap sampai "<< angka<<" adalah "<<jumlah;
}