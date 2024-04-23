#include <iostream>
using namespace std;

main() {
    system("CLS");
    int angka;
    
    cout<<"masukkan angka: "; cin>>angka;
    cout<<endl;

    if (angka%2==0) {
        cout<<"angka "<<angka<<"  merupakan bilangan genap"<<endl;
    } else {
        cout<<"angka "<<angka<<"  merupakan bilangan ganjil"<<endl;
    }

    if (angka%3==0) {
        cout<<"angka "<<angka<<"  habis dibagi 3"<<endl;
    } else {
        cout<<"angka "<<angka<<"  tidak habis dibagi 3"<<endl;
    }

    if (angka%5==0) {
        cout<<"angka "<<angka<<"  habis dibagi 5 "<<endl;
    } else {
        cout<<"angka "<<angka<<"  tidak habis dibagi 5"<<endl;
    }

    if (angka%7==0) {
        cout<<"angka "<<angka<<"  habis dibagi 7"<<endl;
    } else {
        cout<<"angka "<<angka<<"  tidak habis dibagi 7l"<<endl;
    }
 
}