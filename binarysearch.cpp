#include<iostream>
using namespace std;
void binarysearch(int arr[],int n,int key){
    int start=0; int end=n-1;
    while (start<=end)
    {
       int mid=(start+end)/2;
       if (arr[mid]==key)
       {
       cout<<mid;
       break;
       }
       else if (arr[mid]<key)
       {
       start=mid+1;
       }
       else{
        end=mid-1;
       }
       
    }
    
}
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
       cin>>arr[i];

    }
    int key;
    cout<<"Enter the key";
    cin>>key;
    binarysearch(arr,n,key);
    
    return 0;
}