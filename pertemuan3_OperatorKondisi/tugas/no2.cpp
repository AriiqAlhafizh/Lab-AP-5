#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int golongan, anak, gaji_pokok, tambahan, total;
    string nama;

    cout<<"program menentukan gaji"<<endl;
    cout<<endl;
    cout<<"golongan 1: gaji pokok Rp.5.000.000"<<endl;
    cout<<"golongan 2: gaji pokok Rp.3.000.000"<<endl;
    cout<<"golongan 3: gaji pokok Rp.2.500.000"<<endl;
    cout<<endl;
    
    cout<<"masukkan golongan anda: "; cin>>golongan;
    switch (golongan){
    case 1: gaji_pokok=5000000; break;
    case 2: gaji_pokok=3000000; break;
    case 3: gaji_pokok=2500000; break;
    default:
        cout<<endl; 
        cout<<"mohon masukkan golongan yang benar"; exit(0);
    }

    cout<<"masukan jumlah anak anda: "; cin>>anak;
    if (anak<0){
        cout<<endl;
        cout<<"jumlah anak tidak mungkin minus"; exit(0);
    } else if (anak==1||anak==2){
        tambahan=500000;
    } else if (anak>2){
        tambahan=750000;
    } else{
        tambahan=0;
    }

    total=(gaji_pokok*0.95)+tambahan;

    cout<<"masukkan nama anda: ";cin>>nama;

    system("CLS");

    cout<<"nama        : "<<nama<<endl;
    cout<<"golongan    : "<<golongan<<endl;
    cout<<"jumlah anak : "<<anak<<endl;
    cout<<"gaji total  : Rp."<<total<<endl;
}