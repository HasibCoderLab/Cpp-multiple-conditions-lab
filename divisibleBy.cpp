// ================================================
//               Language: C++ / Cpp
//               Topic   : [multiple--conditions]
//               Problem : 👉👉 [1]  divisibleBy
//               Want    : Take  positive integer input and tell if it is divisible 
//                          by   5 and 3
// ================================================
#include <iostream>
using namespace std;
int main(){
 int x;
 cout<<"Enter Number ";
 cin>>x;
 if (x%5==0 && x%3==0 )  // (x%15==0 )
 {
    cout<<x << " is divisible By 5 And 3"<<endl;
 }else{
    cout<<x << " is not divisible By 5 And 3"<<endl;

 }
 

    return 0 ;
}
