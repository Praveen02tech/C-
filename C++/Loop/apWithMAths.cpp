#include<iostream>
using namespace std;
int main(){
    // AP --   4,7,10,13,16 ....upto n terms
    // with maths

    int n;
    cout<<"Enter the n : ";
    cin>>n;
    for(int i=4; i<=3*n+1; i+=3){  // a+(n-1)d  in condition
        cout<<i<<endl;
    }
}