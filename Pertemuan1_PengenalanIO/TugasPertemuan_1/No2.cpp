#include <iostream>
using namespace std;

main() {
    system("CLS");
    string getline_teks, cin_teks;

    cout<<"ular melingkar di pagar pak umar"<<endl;
    cout<<endl;
    cout<<"masukkan kalimat diatas: "; getline(cin, getline_teks);
    cout<<"masukkan kalimat yang sama: "; cin>>cin_teks;
    cout<<endl;
    cout<<"kalimat yang disimpan menggunakan getline akan tersimpan penuh seperti ini: "<<getline_teks<<endl;
    cout<<"sedangkan kalimat yang menggunakan cin akan berhenti saat pertama kali kamu menekan enter seperti ini: "<<cin_teks<<endl; 

}