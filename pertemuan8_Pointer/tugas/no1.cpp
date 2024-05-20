#include <iostream>
using namespace std;

main() {
    system("CLS");
    
    int nilai[20], i;


    for (i=1; i<=20; i++){
        nilai[i] = i;
        if (i % 2 == 1){
            cout<< nilai[i] << " menempati alamat "<< &nilai[i]<<endl;
        }
    }
}