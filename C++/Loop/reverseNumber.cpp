#include<iostream>
using namespace std;
int main(){
    int n,lastDigit;
    cout<<"Enter the number : ";
    cin>>n;
    int rev = 0;

    while(n!=0){
        lastDigit = n % 10;
        rev = rev*10 + lastDigit ;
        n =n/10;
    }
    cout<<" Reversed Number is : "<<rev;
    return 0;
} 