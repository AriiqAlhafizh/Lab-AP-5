#include <iostream>
using namespace std;

int main() {
    system("CLS");
//    char nilai;
//
//    cout<<"masukkan nilai kamu: "; cin>>nilai;
//
//    switch (nilai)
//    {
//    case 'A': cout<<"A"; break;
//    case 'B': cout<<"B"; break;
//    case 'C': cout<<"C"; break;
//    case 'D': cout<<"D"; break;
//    case 'E': cout<<"E"; break;
//    default: cout<<"masukkan nilai yang benar"; break;
//    }
//==============================================================//
    int umur;

    cout<<"berapa umur kamu: "; cin>>umur;

    if (umur<0) {
        cout<<"kamu bukan manusia";
    }else {
        //if (umur>0&&umur<=5) {
        //    cout<<"kamu masih balita";
        //}else if (umur>5&&umur<=21) {
        //    cout<<"kamu adalah remaja";
        //}else if (umur>21&&umur<=70) {
        //    cout<<"kamu sudah dewasa";
        //}else {
        //    cout<<"kamu sudah lansia. sudah saatnya tidur";

        switch (umur){
        case 0 ... 5: cout<<"kamu masih balita"; break;
        case 6 ... 21: cout<<"kamu adalah remaja"; break;
        case 22 ... 70: cout<<"kamu sudah dewasa"; break;
        default: cout<<"kamu sudah lansia. sudah saatnya tidur";break;
        }
    }
    
//================================================================//
    //float tinggi;
//
    //cout<<"masukkan tinggi kamu(cm): ";cin>>tinggi;
    //tinggi>200?cout<<"kamu berbakat jadi pemain basket":cout<<";0";
}
