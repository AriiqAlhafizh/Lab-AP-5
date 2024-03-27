#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int bulat;

    cout<<"program untuk mengetahui ganjil/genapnya suatu bilangan bulat"<<endl;
    cout<<endl;
    cout<<"masukkan bilangan bulat: "; cin>>bulat;

    if (bulat%2==0) {
        cout<<bulat<<" merupakan bilangan genap";
    } else {
        cout<<bulat<<" merupakan bilangan ganjil";
    }
}