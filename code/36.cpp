#include <iostream>
#include <cmath>
using namespace std ;
int main(){
int n;
cout<<"enter number :"<<endl;
cin>>n;
int count = 0;

        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                int c = sqrt(a*a + b*b);

                if (c <= n && a*a + b*b == c*c)
                    count++;
            }
        }

        return count;
    }
