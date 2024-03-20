#include <iostream>
using namespace std;

main(){
    system("CLS");
   int i=2;
   int k=7;
   int l=1;
   int c=9;
   int u=5;
   int s=6;

   //a
   cout<<"a. hasil dari (3-1<I OR K-5<8+2 AND L+7>=9+3) adalah ";
   cout<<((3-1<i)||(k-5<8+2)&&(l+7>=9+3))<<endl;
   /* (3-1<2) or (7-5<8+2) and (1+7>=9+3)
       0    or     1     and     0
       1    and     0
       0
    */

   //b
   cout<<"b. hasil dari (L%3>U AND (C/U<S OR 3*I-K>0) adalah ";
   cout<<((l%3>u)&&(c/u<s)||(3*i-k>0))<<endl;
   /* (1 mod 3>5) and (9 div 5<6) or (3*2-7>0)
       0    and     1     or     0
       0    or     0
       0
    */

   //c
   cout<<"c. hasil dari (I-9>K OR L+3<4*C) adalah ";
   cout<<((i-9>k)||(l+3<4*c))<<endl;
   /* (2-9>7) or (1+3<4*9)
       0    or     1  
       1
    */

   //d
   cout<<"d. hasil dari (I OR K AND L XOR 3 SHL 2 (bitwise)) adalah ";
   cout<<(i|k&l^3<<2)<<endl;
   /* 2 or 7 and 1 xor 3<<2
      0010 or 0111 and 0001 xor 0011 shl 2
      0010 or 0111 and 0001 xor 1100
      0010 or 0001 xor 1100
      0010 or 1101
      1111 = 15
    */

}