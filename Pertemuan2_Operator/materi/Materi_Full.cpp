#include <iostream>
using namespace std;

main() {
    system("CLS");

    //unary minus
    int bilangan1 = 5;
    bilangan1 = -(bilangan1);

    cout<<bilangan1<<endl;

    //penjumlahan
    int bilangan2 = 5;
    int bilangan3 = 10;

    cout<<bilangan2 + bilangan3<<endl;

    //pengurangan
    cout<<bilangan2 - bilangan3<<endl;

    //perkalian
    cout<<bilangan2 * bilangan3<<endl;

    //pembagian
    cout<<float(bilangan2)/bilangan3<<endl;

    //div
    cout<<bilangan2/bilangan3<<endl;

    //modulo
    cout<<bilangan2%bilangan3<<endl;

    //----------------------//
    //increment & decrement
    bilangan2++;
    --bilangan3;

    cout<<bilangan2;
    cout<<bilangan3<<endl;

    //----------------------//
    //sama dengan
    bool tes1 = bilangan1==bilangan2;
    bool tes2 = bilangan1!=bilangan2;
    bool tes3 = bilangan1<bilangan2;

    cout<<tes1;
    cout<<tes2;
    cout<<tes3<<endl;

    //----------------------//
    //
    bool kondisi1 = false;
    bool kondisi2 = true;
    
    cout<<!(kondisi1);
    cout<<kondisi1||kondisi2;
    cout<<(kondisi1&&kondisi2)<<endl;

    //--------------------//
    //
    bool cek1 = 12>20;
    string cek2 = cek1? "satu":"nol";

    cout<<cek2;
}
