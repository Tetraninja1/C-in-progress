#include<iostream>
using namespace std;

int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int factorial(int n){
    if (n<=1){
    return 1;
}
    return n * factorial(n-1);
}
int main (){
    int a,b;
    // factorial of the number
    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<"the result of fibonacci sequence is "<<endl;
    cout<<a<<"is"<<fib(a)<<endl;
    return 0;
}