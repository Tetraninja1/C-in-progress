#include <iostream>
using namespace std;

    // *****loops in cpp*****

int main(){

    cout<<"counting upto 100 using for loop"<<endl;
    for (int i = 1; i < 100; i++)
    {
        cout<<i<<endl;
    }
    cout<<"counting till 100 using while loop"<<endl;
    int a=1;
    while (a<=100)
    {
        cout<<a<<endl;
        a++;
    }
    cout<<"counting upto 40 using do while loop"<<endl;
    int b=1;
    do{
      cout<<b<<endl;
      b++;  
    }while(b<=40);
    return 0;
}