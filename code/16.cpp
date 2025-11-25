//Check whether a number is divisible by 5 and 11.

#include <iostream>
using namespace std ;
int main(){
int n;
cout<<"enter a number "<<endl;
cin>>n;
if(n%5==0&&n%11==0){
cout<<"number is divisible by this numbers"<<endl;
}
else{
cout<<"number is not divisible by 5 and 11";
}
return 0;
}