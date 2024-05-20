#include <iostream>
#include <iomanip>
using namespace std;

void tambah(int *ptrbil1, int *ptrbil2){
    cout<<"\n\n" << *ptrbil1 <<" + "<< *ptrbil2<< " = "<< *ptrbil1 + *ptrbil2;
}

void kurang(int *ptrbil1, int *ptrbil2){
    cout<<"\n\n" << *ptrbil1 <<" - "<< *ptrbil2<< " = "<< *ptrbil1 - *ptrbil2;
}
void kali(int *ptrbil1, int *ptrbil2){
    cout<<"\n\n" << *ptrbil1 <<" + "<< *ptrbil2<< " = "<< *ptrbil1 * *ptrbil2;
}
void bagi(int *ptrbil1, int *ptrbil2){
    cout<<"\n\n" << *ptrbil1 <<" + "<< *ptrbil2<< " = "<< float(*ptrbil1) / *ptrbil2;
}

main() {
    system("CLS");
    int bil1, bil2, operasi;
    cout<<fixed<<setprecision(2);
    
    cout<<"kalkulator\n\n";
    cout<<"masukkan bilangan 1: "; cin>>bil1;
    cout<<"masukkan bilangan 2: "; cin>>bil2;
    system("CLS");
    cout<<"1. tambah\n";
    cout<<"2. kurang\n";
    cout<<"3. kali\n";
    cout<<"4. bagi\n";
    cout<<"masukkan operasi: "; cin>>operasi;

    switch (operasi){
        case 1: tambah(&bil1, &bil2); break;
        case 2: kurang(&bil1, &bil2); break;
        case 3: kali(&bil1, &bil2); break;
        case 4: bagi(&bil1, &bil2); break;
        default: cout<<"pilih operasi yang tersedia"; exit(0);
    }

}