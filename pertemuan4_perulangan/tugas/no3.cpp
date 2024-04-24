#include <iostream>
using namespace std;

void negative(int i, int tahun, int interval, string kabisat){
    for (i=tahun; i>=tahun+interval; i--){
        if ((i%4==0)&&(i%100==0)&&(i%400==0)){
               kabisat=" merupakan tahun kabisat";
           } else if ((i%4==0)&&(i%100==0)&&(i%400!=0)){
               kabisat=" bukan merupakan tahun kabisat";
           } else if ((i%4==0)&&(i%100!=0)){
               kabisat=" merupakan tahun kabisat";
           } else if (i%4!=0){
               kabisat=" bukan merupakan tahun kabisat";
        } 
        cout<<i<<kabisat<<endl;
    }    
}

void positive(int i, int tahun, int interval, string kabisat){
    for (i=tahun; i<=tahun+interval; i++){
         if ((i%4==0)&&(i%100==0)&&(i%400==0)){
               kabisat=" merupakan tahun kabisat";
           } else if ((i%4==0)&&(i%100==0)&&(i%400!=0)){
               kabisat=" bukan merupakan tahun kabisat";
           } else if ((i%4==0)&&(i%100!=0)){
               kabisat=" merupakan tahun kabisat";
           } else if (i%4!=0){
               kabisat=" bukan merupakan tahun kabisat";
        } 
        cout<<i<<kabisat<<endl;
    }    
}


main() {
    system("CLS");
    int tahun, interval, i;
    string kabisat;

    cout<<"masukkan tahun (1000 - 9000): "; cin>>tahun;
    if ((tahun<1000)||(tahun>9000)) exit(0);
    cout<<"masukkan interval: "; cin>>interval;
    if ((interval<-tahun)||(interval>9999-tahun)) exit(0);
    cout<<endl;
    
        if (interval<0){
           negative(i, tahun, interval, kabisat);
        }else{
           positive(i, tahun, interval, kabisat);
        }
}