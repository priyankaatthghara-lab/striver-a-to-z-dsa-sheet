//striver a 2 z dsa sheet 
// different sorting techniques ** selection sort** (brute force approch)


#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    { int mini=i;
       for (int j = i+1; j <=n-1; j++)
       {
        if ( arr[j]<arr[mini])
        {
            
       mini=j;

        }
      }
       int temp=arr[mini];
       arr[mini]=arr[i];
       arr[i]=temp;
       
    }
     cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
  
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    for (int i = 0; i <n; i++)
    {
       cout<<arr[i]<<" ";
      
    }
    
    selectionsort(arr,n);
    return 0;

}