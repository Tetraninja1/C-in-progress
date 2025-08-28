#include <iostream>
using namespace std;

// if else andsitch case statement

int main(){
    int a;
    cout<<"enter your age kindly"<<endl;
    cin>>a;
    if (a<18)
    {
        cout<<"you are a kid you cannot able to match the criteria of the party"<<endl;
    }
    else if (a>=18)
    {
        cout<<"welcome to the party "<<endl;
    }
   return 0;
}