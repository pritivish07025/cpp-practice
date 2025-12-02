// find the minimum value using function

#include <iostream>
using namespace std;

int min(int a, int b){
if(a>b){
cout<<"a is greater" << endl;
}
if(b>a){
cout<<"b is greater" <<endl;
}
return 0;
}
int main(){
int num1, num2;
cin>>num1;
cin>>num2;
min(num1, num2);
return 0;
}