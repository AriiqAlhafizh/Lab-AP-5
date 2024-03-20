#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

main(){
    system("CLS");
    cout<< fixed<< setprecision(2);
    float A,B,C,x1,x2;

    cout<<"program untuk menghitung nilai akar - akar persamaan suatu persamaan kuadrat"<<endl;
    cout<<"persamaan Ax2 + Bx + C = 0"<<endl;
    cout<<endl;

    cout<<"masukkan nilai A: "; cin>>A;
    cout<<"masukkan nilai B: "; cin>>B;
    cout<<"masukkan nilai C: "; cin>>C;
    cout<<endl;

    x1=(-B+sqrt(pow(B,2)-4*A*C))/2*A;
    x2=(-B-sqrt(pow(B,2)-4*A*C))/2*A;

    cout<<"nilai dari x1 dan x2 adalah "<<x1<<" dan "<<x2; 
    //kalo outputnya "nan" berarti x1 atau x2-nya tidak dapat diartikan sebagai angka
}