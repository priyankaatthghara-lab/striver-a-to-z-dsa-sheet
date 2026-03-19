#include<iostream>
using namespace std;
void binarytodecimal(int n){
     int power=1;
     int sum=0;
   while (n>0)
   {
    int lastdigit=(n%10)*power;
        sum+=lastdigit;
        power=power*2;
        n=n/10;
   }
   
    
        cout<<"The decimal number of the given binary number is :"<<sum;
        return;
   
    
}
int main(){
    int n;
    cout<<"Enter the binary number";
    cin>>n;
    binarytodecimal(n);
    return 0;
}