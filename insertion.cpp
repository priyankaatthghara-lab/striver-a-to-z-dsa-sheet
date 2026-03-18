#include<iostream>
using namespace std;
int insertionsort(int arr[],int n){
    for (int i = 0; i <=n-1; i++)
    {
       for (int j = i;j>0; j--)
       {
        if (arr[j]<arr[j-1])
        {
          int temp= arr[j-1];
          arr[j-1]=arr[j];
          arr[j]=temp;
        }
        
       }
      
       
    }
    for (int i = 0; i < n; i++)
       {
        cout<<arr[i]<<" ";
       }
       return 0; 
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    insertionsort(arr,n);
}