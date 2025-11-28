//find character is lowercase or uppercase

#include <iostream>
using namespace std;
int main(){
char ch;
cout <<"enter character "<<endl;
cin>>ch;
if(ch>='A' && ch<='Z' )
{
cout<<"character is uppercase"<<endl;
}

 else if(ch>='a' && ch<='z' ){
cout<<"charcter is lowercase"<<endl;
}

else{
cout<<"this is not alphabet";
}
return 0;
}




