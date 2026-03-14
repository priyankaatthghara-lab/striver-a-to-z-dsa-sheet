#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int sum=0;
    int arr[n];
     for (int i = 0; i < n; i++)
    {
       cin>>arr[i];// taking the array from the user
    }
    for (int i = 0; i < n; i++)
    {
       sum=sum^arr[i];// xor operator is used if the two elements of the array is same then it gets equal to 0
    }
    cout<<"The single element of the given array is:"<<sum;
    return 0;
    

}