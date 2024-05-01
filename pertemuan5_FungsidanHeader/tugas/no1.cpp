#include <iostream>
#include <typeinfo> 
using namespace std;


string fizzbuzz(int i, int a){
    if ((a%5==0)&&(a%3==0)){
        return "FizzBuzz ";
    } else if (a%3==0){
        return "Fizz ";
    } else if (a%5==0){
        return "Buzz ";
    }
}

void ulang(int i, int angka, int a, int tambah, int tipe){
    for(i=1; i<=angka; i++){
        if ((a%5==0)||(a%3==0)){
            cout<<fizzbuzz(i, a);
            goto lompat;
        }
        cout<<a<<" ";
        tipe=a;
        lompat:
        a+=tambah;
        tambah+=2;
    }
    cout<<endl;
    cout<<tipe<<" bertipe "<<typeid(a).name() <<endl;
}

main() {
    system("CLS");

    int a=2;
    int tambah=4;
    int i, angka;
    int tipe;
    
    cout<<"masukkan sebuah angka (3 - 100): "; cin>>angka;
    cout<<endl;

    if (angka<3||angka>100){
        cout<<"Input tidak valid. berikan input dengan rentang 3 - 100";
        exit(0);
    }
    ulang(i, angka, a, tambah, tipe);
}