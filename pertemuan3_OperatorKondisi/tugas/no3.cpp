#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    system("CLS");
    cout<<fixed<<setprecision(2);

    float berat, tinggi, BMI;
    string kategori;
    
    cout<<"program menghitung BMI"<<endl;
    cout<<endl;
    cout<<"maasukkan berat badan anda (kg): "; cin>>berat;
    cout<<"masukkan tinggi badan anda (m): "; cin>>tinggi;

    BMI=berat/pow(tinggi,2);

    if (BMI<18.5){
        kategori="berat badan kurang";
    }else if (BMI<25&&BMI>=18.5){
        kategori="berat badan normal";
    }else if (BMI<30&&BMI>=25){
        kategori="berat badan berlebih";
    } else{
        kategori="obesitas";
    }

    system("CLS");

    cout<<"BMI anda            : "<<BMI<<endl;
    cout<<"Kategori berat anda : "<<kategori<<endl;
}