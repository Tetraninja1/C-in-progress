#include<iostream>
using namespace std;

float sum(float a,int b){
    cout<<"using function with only two arguments"<<endl;
    return a+b;
}
// calculate the volume of cube
int volume(double r,int h ){
    cout<<"the volume of cylinder"<<endl;
    return (3.14*r*r*h);

}
// calculate the area of rectangle
float area(float a, float b){
    cout<<"the area of rectangle"<<endl;
    return a*b;
}

// calculate vol of cube
int volume(int a){
    cout<<"vol of cube"<<endl;
    return (a*a*a);

}
int sum(int a,int b,int c){
    cout<<" using function with 3 arguments"<<endl;
    return a+b+c;
}

int main(){
    cout<<"the sum of a,b,c"<<endl;
    cout<<sum(5,7,9)<<endl;
    cout<<"the sum of a,b "<<endl;
    cout<<sum(3.14,5)<<endl;
    cout<<volume(5,6)<<endl;
    cout<<volume(81)<<endl;
    cout<<area(36.14,6.21)<<endl;
    return 0;
}