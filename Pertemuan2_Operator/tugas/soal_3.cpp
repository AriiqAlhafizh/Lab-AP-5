#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

main(){
    system("CLS");
    cout<< fixed << setprecision(2);
    const float pi=3.14;
    float tinggi;
    float diameter,jari;
    float alas_segitiga,tinggi_segitiga,luas_alas;
    int pilih;
    
    cout<<"program untuk menghitung luas permukaan dan volume dari bangun ruang"<<endl;
    cout<<endl;
    cout<<"1. kerucut"<<endl;
    cout<<"2. limas segitiga"<<endl;
    cout<<"3. bola"<<endl;
    cout<<"4. prisma segitiga"<<endl;
    cout<<"pilih bagun ruang: "; cin>>pilih;
    system("CLS");

    switch (pilih){
    case 1: 
        cout<<"kerucut"<<endl;
        cout<<endl;
        cout<<"masukkan diameter lingkaran(cm): "; cin>>diameter;
        cout<<"masukkan tinggi(cm): "; cin>>tinggi;
        cout<<endl;
        jari=diameter/2;

        cout<<"volume dari kerucut tersebut adalah (cm3): "<<(1.0/3)*pi*(pow(jari,2))*tinggi<<endl;
        cout<<"luas permukaan dari kerucut tersebut adalah (cm2): "<<pi*jari*((sqrt(pow(jari,2)+pow(tinggi,2)))+jari)<<endl;
        break;
    case 2:
        cout<<"limas segitiga"<<endl;
        cout<<endl;
        cout<<"masukkan tinggi segitiga alas(cm): "; cin>>alas_segitiga;
        cout<<"masukkan tinggi segitiga alas(cm): "; cin>>tinggi_segitiga;
        cout<<"masukkan tinggi limas(cm): "; cin>>tinggi;
        cout<<endl;
        luas_alas=(1.0/2)*alas_segitiga*tinggi_segitiga;
    
        cout<<"volume dari limas segitiga tersebut adalah (cm3): "<<(1.0/3)*alas_segitiga*tinggi<<endl;
        cout<<"luas permukaan dari limas segitiga tersebut adalah (cm2): "<<4*(alas_segitiga)<<endl; //anggap saja segitiganya sama sisi
        break;
    case 3: 
        cout<<"bola"<<endl;
        cout<<endl;
        cout<<"masukkan diameter lingkaran(cm): "; cin>>diameter;
        cout<<endl;
        jari=diameter/2;

        cout<<"volume dari bola tersebut adalah (cm3): "<<pi*(pow(jari,3))<<endl;
        cout<<"luas permukaan dari bola tersebut adalah (cm2): "<<4*pi*(pow(jari,2))<<endl;
        break;
    case 4:
        cout<<"prisma segitiga"<<endl;
        cout<<endl;
        cout<<"masukkan tinggi segitiga alas(cm): "; cin>>alas_segitiga;
        cout<<"masukkan tinggi segitiga alas(cm): "; cin>>tinggi_segitiga;
        cout<<"masukkan tinggi prisma(cm): "; cin>>tinggi;
        cout<<endl;
        luas_alas=(1.0/2)*alas_segitiga*tinggi_segitiga;
    
        cout<<"volume dari prisma segitiga tersebut adalah (cm3): "<<alas_segitiga*tinggi<<endl;
        cout<<"luas permukaan dari prisma segitiga tersebut adalah (cm2): "<<(2*luas_alas) + (3*(alas_segitiga)*tinggi)<<endl; //anggap saja segitiganya sama sisi
        break;
    default:
        cout<<"mohon pilih bangun ruang yang tersedia";
        break;
    }
}