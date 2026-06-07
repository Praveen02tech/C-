#include<iostream>
#include <cmath>
using namespace std;
int main(){
    // AP --   1,2,4,8,16 ....upto n terms
    // without maths

    int n;
    cout<<"Enter the n : ";
    cin>>n;

    int a=1; 

    for(int i=1; i<=n; i++){ // this is just loop round in this
        cout<<a<<endl; // first digit
        a=a*2; // next digit and increase
    }
    return 0; // Signals successful execution
}