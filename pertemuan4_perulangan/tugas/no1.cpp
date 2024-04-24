#include <iostream>
using namespace std;

main() {
    system("CLS");

    int j=1;
    int batas,i;
    
    cout<<"masukkan batas perulangan: "; cin>>batas;

    for (i=1; i<=batas; i++){
        cout<<j<<" ";
        if (j%2==0){
            j+=3;
        } else if (j%2==1){
            j+=5;
        }
    }


    
  
}