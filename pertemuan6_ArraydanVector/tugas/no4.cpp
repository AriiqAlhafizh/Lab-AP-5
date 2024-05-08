#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
using namespace std;

main() {
    system("CLS");
    vector<int> deret;
    int int_deret,i;
    string string_deret;

    
    cout<<"masukkan deret bilangan yang dipisahkan oleh spasi: "; getline(cin, string_deret);

    stringstream stringstream_deret(string_deret);

    while (stringstream_deret >> int_deret) {
        deret.push_back(int_deret);
    }

    int panjang_deret=deret.size();

    for (i=0; i<panjang_deret; i++){
        cout<<deret[i]<<" ";
    }
    cout<<endl;

    cout<<"panjang vector: "<<panjang_deret<<endl;
    
    for (i=0; i<panjang_deret; i++){
        cout<<deret[0]<<endl;
        deret.erase(deret.begin());
    }
    cout<<"panjang vector setelah dihapus: "<<deret.size()<<endl;


}
