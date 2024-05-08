#include <iostream>
#include <math.h>
using namespace std;

main() {
    system("CLS");
    string kalimat,subkalimat_1, subkalimat_2;
    int batas,i;
    
    cout<<"masukkan sebuah kalimat dengan seluruhnya huruf kapital dan tidak lebih dari 100 kata: "; getline(cin,kalimat);
    if (kalimat.length()>100) exit(0);
    for (i=1; i<=kalimat.length(); i++){
        if (islower(kalimat[i])){
            cout<<"mohon masukkan kalimat dengan seluruhnya huruf kapital";
            exit(0);
        }
    }

    batas=round(kalimat.length()/2.0);
    subkalimat_1=kalimat.substr(0,batas);
    subkalimat_2=kalimat.substr(batas,batas);

    for (i=batas; i>=0; i--){
        cout<<subkalimat_1[i];
    }
     for (i=batas; i>=0; i--){
        cout<<subkalimat_2[i];
    }
}