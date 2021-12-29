# Abhic-//Check weather given number is prime or not
#include <iostream>
using namespace std;
int main(){
        cout<<"Enter a number: ";
        int n;
        cin>>n;
        int a=0;
        for(int i=2;i<n ;i++){
                if((n%i)==0)a++;}
        if(a==0)cout<<"It is prime number";
        else cout<<"It is not prime";
return 0;}
