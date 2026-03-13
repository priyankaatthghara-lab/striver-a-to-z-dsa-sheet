#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int maximun=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
    if (arr[i]>maximun)
    {
       maximun=arr[i];
    }
    
     
    }
    cout<<"The largest element from the array is "<<maximun;
    
    
    return 0;
}