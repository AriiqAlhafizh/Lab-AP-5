#include <iostream>
using namespace std;

main() {
    system("CLS");
    int angka, i;
    
    cout<<"masukkan angka (1 - 10000): "; cin>>angka;
    if ((angka<1)||(angka>10000)) exit(0);
    cout<<endl;

    for (char hore : "Hore!"){
        if (((hore=='o')||(hore=='e')||(hore=='!'))&&(angka>=2)){
            for (i=2; i<=angka; i++){
                cout<<hore;
            }
        }
        cout<<hore;
    }

}