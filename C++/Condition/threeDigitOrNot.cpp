#include<iostream>
using namespace std ;
int main (){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    
    if(n>99 and n<1000){
        cout<< "3 digit number";
    }
    else{
        cout<< "Not a 3 digit number";
    }
}