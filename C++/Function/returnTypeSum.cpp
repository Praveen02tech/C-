#include<iostream>
using namespace std;
int sum(int a  ,int b){  // formal parameter
    return a+b;          // returns 97
}

int main(){
    cout<<sum(90,7); // actual parameter 
    return 0;                   // pass by value
}