#include <iostream>
using namespace std;

main() {
    system("CLS");
    
    int i,j,k;
    int p;

    cout<<"masukkan tinggi piramida: "; cin>>p;

    for(i=p; i>=1; i--){
        for(k=1; k<=i-1; k++){
        cout<<" ";
        }
        for(j=p; j>=i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}