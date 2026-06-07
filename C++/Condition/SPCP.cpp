

#include<iostream>
using namespace std ;
int main(){
    int sp,cp;
    cout<<"Enter the sp :" ;
    cin>>sp;
    cout<<"Enter the cp : " ;
    cin>>cp;

    if(sp>cp){
        cout<<"Profit";
    }
    else if(cp>sp){
        cout<<"Loss";
    }
    else{
    cout<<"No profit No Loss";
    }
    return 0;
} 
