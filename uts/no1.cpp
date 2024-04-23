#include <iostream>
using namespace std;

main() {
    system("CLS");
    string kalimat;
    
    cout<<"masukkan kalimat: "; getline(cin, kalimat);

    for (char N : kalimat){
        cout<<N<<endl;
    }

}