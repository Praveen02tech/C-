#include<iostream>
using namespace std;
int main(){
    int n,lastDigit;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 0;

    while(n!=0){
        lastDigit = n%10;
        if(lastDigit %2==0){
            sum+=lastDigit;
        } 
        n=n/10;
    }
    cout<<"Total Even Digit sum : "<<sum;
    return 0;
}