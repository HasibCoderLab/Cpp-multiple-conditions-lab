// ================================================
//               Language: C++ / Cpp
//               Topic   : [Condition]
//               Problem : 👉👉 sideOfTriangle
//               Want    : Take 3  number s input and tell if they can be  iside Of a Triangle 
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int  a,b,c;
    cout<<"Enter 1st side ";
    cin>>a;
    cout<<"Enter 2nd side ";
    cin>>b;
    cout<<"Enter 3rd side ";
    cin>>c;
    if( (a+b)>c && (b+c)>a && (c+a)>b ){
        cout<<"Valid Triangle \n";
    }else
    {
        cout<<"Invalid Triangle \n";
    }
    
    return 0 ;
}