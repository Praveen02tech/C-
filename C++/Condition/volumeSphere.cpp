#include<iostream>
#include<cmath>
#define Pi 3.1415
using namespace std;
int main(){
    float r,vol ;
    cout<<"Enter the radius : ";
    cin>>r;
    vol = (4.0/3)* Pi * pow(r,3) ;
    cout<< "The volume of the sphere is : "<< vol ;
}