//Find the largest among three numbers.

#includte <iostream>
using namespace std;
int main(){
int a, b, c;
cout<<"enter all the numbers:"<<endl;
cin>>a;
cin>>b;
cin>>c;
if(a>b&&a>c){
cout<<" a is larger"<<endl;
}
else if(b>a &&b>> c){
cout<<"b is larger "<< endl;
}
else {
cout<<"c is larger "<<endl;
}
return 0;
}
