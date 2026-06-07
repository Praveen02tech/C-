#include<iostream>
using namespace std;
int main(){
    int n,lastDigit;
    cout<<"Enter the number : ";
    cin>>n;
    int rev = 0;
    int original = n;
    while(n!=0){
        lastDigit = n % 10;
        rev = rev*10 + lastDigit ;
        n =n/10;
    }
    cout<<"Reversed Number is : "<<rev<<endl;
    cout<<"Sum of number and its Reversed number is : "<<original+rev;
    return 0;
} 