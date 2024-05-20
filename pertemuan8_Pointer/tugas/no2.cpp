#include <iostream>
using namespace std;

main() {
    system("CLS");
    int x=25, *px;
 
    px = &x;
    *px = x;

    cout<< px <<"\n"<< *px <<"\n" << &x <<"\n"<< x <<"\n";
}