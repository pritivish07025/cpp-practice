//create a grading system

#include <iostream>
using namespace std;
int main(){
int marks;
cout<<"enter marks of that student:"<<endl;
cin >>marks;
if( marks>90 && marks<=100){
cout<<"A "<<endl;
}
else if( marks>80 && marks<=90){
cout<<"B "<<endl;
}
else{
cout<<"C";
}
return 0;
}