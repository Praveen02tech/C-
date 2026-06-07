#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            cout<<" Composite Number ";
            break;
        }
        // else{
        //   cout<<" Prime Number "; 
        //    break;          
         /* Summary of Output BehaviorEven numbers > 2: Correctly identified as Composite.
         Even numbers <= 2: Missed by the loop.
         Odd Prime numbers: Correctly identified as Prime (by coincidence, because they fail the i=2 check).
         Odd Composite numbers: Incorrectly identified as Prime.
        */    

    }
    return 0;
}