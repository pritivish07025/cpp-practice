//Find grade based on marks (A, B, C, etc.).

#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a marks"<<endl;
cin>>n;
if(n>90&&n<=100){
cout<<"student got grade A "<<endl;
}
else if(n>80&&n<70){
cout<<"student got grade B "<<endl;
}
else{
cout<<"student got grade C "<<endl;
}
return 0;
}