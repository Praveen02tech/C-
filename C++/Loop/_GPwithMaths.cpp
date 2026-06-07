#include<iostream>
#include <cmath>
using namespace std;
int main(){
    // AP --   1,2,4,8,16 ....upto n terms
    // without maths

    int n;
    cout<<"Enter the n : ";
    cin>>n;
    for(int i=1; i<=(int)pow(2,n-1); i*=2){
        // The main reason this code will not run correctly is the use of 2^(n-1) inside your loop condition.
        // In C++, the ^ symbol does not calculate exponents. 
        // It is the bitwise XOR operator, which breaks your loop logic.
        // so use math function with pow()
        cout<<i<<endl;
    }
}