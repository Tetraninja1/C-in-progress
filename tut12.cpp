#include<iostream>
using namespace std;
 
// all about pointers

int main(){
    int a=3;
    int* b = &a;

    // address of variable
    
    cout<<"the address of a "<<&a<<endl;
    cout<<"the address of a is using pointer "<<b<<endl;

    // the value of derefernce operator

    cout<<"the value of b is "<<b<<endl;

    return 0;
}