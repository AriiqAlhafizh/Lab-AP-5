#include <iostream>
#include <string>
using namespace std;

main() {
    system("CLS");
    string nama, NIM, kom, ipk;

    cout<<"masukkan nama Mahasiswa: "; getline(cin, nama);
    cout<<"masukkan NIM Mahasiswa: "; getline(cin, NIM);
    cout<<"masukkan KOM Mahasiswa: "; getline(cin, kom);
    cout<<"masukkan IPK Mahasiswa: "; getline(cin, ipk);

    system("CLS");

    cout<<"nama Mahasiswa : "<<nama<<endl;
    cout<<"NIM Mahasiswa  : "<<NIM<<endl;
    cout<<"Kom Mahasiswa  : "<<kom<<endl;
    cout<<"ipk Mahasiswa  : "<<ipk<<endl;
}