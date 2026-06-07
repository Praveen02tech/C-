#include<iostream>
using namespace std;
int main(){
    int n,lastDigit;
    cout<<"Enter the number : ";
    cin>>n;
    int product = 1 ;

    while(n!=0){                          
        lastDigit = n%10;                 // 1. Extract the last digit
        product = product * lastDigit ;   // 2. Add it to the sum 
        n = n / 10;                       // 3. Remove the last digit from 'n'
    }
    cout<<"Total sum of Digit is : "<<product;
    return 0;
}