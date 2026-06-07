#include<iostream>
using namespace std ;
int main (){
    int a,b,c;
    cout<<"Enter 1st side :";
    cin>>a;
    cout<<"Enter the 2nd side :";
    cin>>b;
    cout<<"Enter the 3rd side : ";
    cin>>c;

    
    if(a+b>c and b+c>a and c+a>b){
        cout<< "valid Triangle";
    }
    else{
        cout<< "Invalid Triangle";
    }
}