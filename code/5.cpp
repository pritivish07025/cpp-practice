//Swap two numbers using a third variable.

#include <iostream>
using namespace std;
int main(){
int a, b, temp=0;
cout<<"enter both the numbers :"<<endl;
cin>>a;
cin>>b;
cout<<"before swapping both the numbers:"<<a<<","<< b<<endl;
temp=b;
b=a;
a=temp;
cout<<"after swapping both the number : " <<a<<","<< b<<endl;
return 0;
}

