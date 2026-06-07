#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    bool isPrime = true ;

  
    // 1. Handle the edge case for 1 before the loop even starts
    if (n <= 1) {
        cout << "Neither Prime nor Composite"; 
        return 0; // Exit the program early
        }


    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if (isPrime==true)
        cout<<" Prime Number ";
    else
        cout<<" Composite Number ";
    return 0;
}