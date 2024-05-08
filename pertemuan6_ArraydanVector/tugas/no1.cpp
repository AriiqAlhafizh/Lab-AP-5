#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int pascal[30][30]={{1},{1}};
    int baris,kolom,i,j;

    cout<<"masukkan x: "; cin>>baris;
    if (baris<1) exit(0);
    cout<<"masukkan y: "; cin>>kolom;
    if (kolom>30) exit(0);
    if (kolom>baris) exit(0);

    for (i=0; i<baris; i++){
        for (j=0; j<=i; j++){
            if ((j==0)||(j==i)){
                pascal[i][j]=1;
                continue;
            }
            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
        }
    }

    cout<<pascal[baris-1][kolom-1];
}