//21. Build calculator using c++

#include <iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter both the numbers:"<<endl;
cin>>a;
cin>>b;
char ch;
cout<<"enter operator(+, -, * , /):"<<endl;
cin>>ch;
switch(ch){
case'+':
   cout<<"result="<<a+b;
   break;
case'-':
   cout<<"result="<<a-b;
   break;

case'*':
   cout<<"result="<<a*b;
   break;

case'/':
   cout<<"result="<<a/b;
   break;
default:
cout<<"invalid operator!";
}

return 0;
}
