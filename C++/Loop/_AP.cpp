#include<iostream>
using namespace std;
int main(){
    // AP --   1,3,5,7,9 ....upto n terms
    // with maths
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    for(int i=1; i<= (2*n-1); i+=2){
        cout<<i<<endl;
    }
}