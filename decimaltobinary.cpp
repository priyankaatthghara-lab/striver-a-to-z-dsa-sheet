#include<iostream>
using namespace std;
void decimaltobinary(int n){
    int lastdgit=0;
    int power=1;
    while (n>0)
    {
       lastdgit=lastdgit+((n%2)*power);
       power=power*10;
       n=n/2;
    }
    cout<<lastdgit;
}
int main(){
    int n;
    cout<<"Enter the decimal number:";
    cin>>n;
    decimaltobinary(n);
}