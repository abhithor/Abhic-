// Write a program in C++ to print Floyd’s Triangle by using the constructor and    destructor.
#include <iostream>
using namespace std;
class f{
       public:
       f(int n){
    for (int i=1 ;i<n+1  ;i++){
           int a=1;
            for (static int j=1 ; a <i+1  ;j++){  // static j and a < i+1

                    cout<<j<<" ";
                  a++;   }          
            cout<<endl;}}};
int main(){
           f o(10);   
return 0;}

