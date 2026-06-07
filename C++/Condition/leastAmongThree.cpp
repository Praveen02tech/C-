#include<iostream>
using namespace std ;
int main(){
    int a,b,c ;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    
    if(a<b and a<c){
        cout<<"A is the least";
    }
    else if(b<a and b<c){
        cout<<"B is the least";
    }
    else{
        cout<<"A is the least";
    }
    return 0;
}