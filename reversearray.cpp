#include<iostream>
using namespace std;
void reversearray(int arr[],int n){
    for (int i = 0; i < n/2; i++)
    {
     int  temp=arr[i];
     arr[i]=arr[n-1-i];// here the array gets directly reversed by swapping the starting and the last element
     arr[n-1-i]=temp;
    }
    for (int i = 0; i <n; i++)
    {
      cout<<arr[i]<<" ";// prints the reverse array. array is passed by refernce if it would be printed from the main function then also it will print the same array
    }
    
    
}
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];// here the size of the array is dynamically allocated and is taken from the user
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
 
    reversearray(arr,n);//function gets called
    cout<<"\n";
    for (int i = 0; i <n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}