#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number : ";
    cin>>n;
    int count = 0;

    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<"Total number of Digit is : "<<count;
    return 0;
}