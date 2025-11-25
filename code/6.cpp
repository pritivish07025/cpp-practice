//Swap two numbers without using a third variable.

#include <iostream>
using namespace std ;
int main(){
int a, b;
cout<<"Enter both the numbers :"<<endl;
cin >>a;
cin>>b;
cout << "Before swapping both the numbers:"<<a<<","<< b<<endl;
a=a+b;
b =a-b;
a=a-b;
cout<<"After swapping both the numbers :"<<a << ","<< b;
return 0;
}