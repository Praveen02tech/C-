#include<iostream>
using namespace std;
int main(){
    // AP --   1,3,5,7,9 ....upto n terms
    // without maths 
    // introducing another variable a but looping from 1 to n
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a=a+2;
    }
}