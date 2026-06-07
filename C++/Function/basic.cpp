#include<iostream>
using namespace std;
void nepal();
void usa();
void england();

     
    int main(){
        for(int i=1;i<=5;i++){
        england();
        nepal();
        usa();
        cout<<endl;
        }
        return 0;
    }

    void england(){
    cout<<" You are in england "<<endl;
    return;
    }

    void usa(){
        cout<<" You are in USA "<<endl;
        return;
    }

    void nepal(){
        cout<<" You are in Nepal "<<endl;
        return;
    }


    /*  Adding the prototype void nepal(); at the very top warns the compiler: 
    "Hey, a function named nepal exists down below, just trust me and keep compiling.
    We write function prototypes at the top because the C++ compiler reads code from top to bottom.
    If you call a function in main() before the compiler has seen it, 
    the compiler will throw an error because it doesn't know what that function is yet.

    2. Cleaner Code Organization In large professional projects, 
    main() is usually kept at the top of the file 
    so anyone reading the code can instantly see the main flow of the program. 
    Prototypes allow you to keep main() at the top and dump all the long, 
    messy function details at the bottom.
    
    3. It Allows Functions to Call Each Other (Circular Dependency)
    If Function A needs to call Function B, and Function B also needs to call Function A, 
    it is physically impossible to place one "above" the other. 
    Declaring prototypes at the top completely solves this issue.
    */