#include <iostream>
using namespace std;

main() {
    system("CLS");

    string nama;
    char N;

    cout<<"masukkan nama: "; cin>>nama;
    
    for (char N : nama){
        if ((N=='a')||(N=='i')||(N=='u')||(N=='e')) {
            N='o';
        }
        cout<<N<<endl;
    }
}