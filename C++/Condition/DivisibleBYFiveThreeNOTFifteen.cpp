#include<iostream>
using namespace std ;
int main(){
    int a , b , c ;
    cout<<"Enter the number : ";
    cin>>a;
    

    if((a%5==0 or a%3==0) and a%15!=0){
        cout<<"divisible by 5 or 3 but not 15";
    }
    else{
        cout<<"Doesnt match condition";
    }
}