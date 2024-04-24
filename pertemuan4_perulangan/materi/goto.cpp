#include <iostream>
using namespace std;

main() {
    system("CLS");
    
    int bintang,i;
    int j;

    cout<<"masukkan batas bintang: "; cin>>bintang;

     for(i=1;i<=bintang;i++){
        j=1;
        while (j<=i){
        // for(j=1;j<=i;j++){
            cout<<"*";
            j++;
        }
        cout<<endl;
    }
    for(i=bintang;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
 
}