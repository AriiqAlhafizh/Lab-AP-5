#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

main() {
    system("CLS");
    int i,j,nilai;
    string nama[3]= {"Andi", "Budi", "Chelly"};
    string job[3]= {"coder", "algoritmist", "tester"};
    int efisiensi[3]= {0,0,0};
    
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (i==0){
                cout<<"masukkan nilai efisiensi "<<nama[i]<<" sebagai "<<job[j]<<" : "; cin>>nilai;
                if (efisiensi[0]< nilai){
                    efisiensi[0]= nilai;
                }
                continue;
            }
            if (i==1){
                cout<<"masukkan nilai efisiensi "<<nama[i]<<" sebagai "<<job[j]<<" : "; cin>>nilai;
                if (efisiensi[1]<nilai){
                    efisiensi[1]=nilai;
                }
                continue;
            }
            if (i==2){
                cout<<"masukkan nilai efisiensi "<<nama[i]<<" sebagai "<<job[j]<<" : "; cin>>nilai;
                if (efisiensi[2]<nilai){
                    efisiensi[2]=nilai;
                }
                continue;
            }
        }
        cout<<endl;
    }

    cout<<fixed<<setprecision(2);
    cout<<"hasil efisiensi: "<<sqrt(pow(efisiensi[0],2)+pow(efisiensi[1],2)+pow(efisiensi[2],2));
}