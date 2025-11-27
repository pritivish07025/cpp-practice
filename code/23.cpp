//check whether a number is positive or negative

#include <iostream>
using namespace std ;
int main(){
int n;
cout<<"enter a number :"<<endl;
cin>>n;
if(n>0){
cout<<"positive number "<<endl;
}
else if(n<0){
cout<<"negative number"<<endl;
}
else{
cout<<"number is equal to zero";
}
return 0;
}
