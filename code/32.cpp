// sum of two numbers using functions

#include <iostream>
using namespace std;
int sum(int a , int b){
int sum=a+b;
cout<<sum;
return 0;
}

int main(){
int num1, num2;
cout<<"enter both the number "<<endl;
cin>>num1;
cin>>num2;
sum(num1, num2);
return 0;
}
