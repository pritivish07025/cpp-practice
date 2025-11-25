//Find the size of int, float, double, and char data types.

#include <iostream>
using namespace std;
int main(){
int a=10;
float b= 2.0;
bool c= true;
double d= 3.0;
char ch= 'P';
cout<<sizeof(int)<<endl;
cout<<sizeof(float)<<endl;
cout<<sizeof(double)<<endl;
cout<<sizeof(char)<<endl;
cout<<sizeof(bool);
return 0;
}