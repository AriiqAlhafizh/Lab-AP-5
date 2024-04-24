#include <iostream>
using namespace std;

main() {
    system("CLS");

    string kalimat;
    char huruf;
    int hilang = 0;

    cout<<"masukkan kalimat: "; getline(cin, kalimat);
    cout<<"masukkan huruf: "; cin>>huruf;
    cout<<endl;
    
    for (char N : kalimat){
        N=tolower(N);
        if (N==huruf){
            hilang++;
            continue;
        }
        cout<<N;
    }
        cout<<endl;
        cout<<"karakter terhapus: "<<hilang<<endl;

}