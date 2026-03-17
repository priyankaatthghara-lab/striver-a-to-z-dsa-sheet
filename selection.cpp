//striver a 2 z dsa sheet 
// different sorting techniques ** selection sort** (brute force approch)


#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++) // here one part is treated as sorted and the other part is treated as unsorted and from the unsorted one minimum element is selected and then they are swapped
    { int mini=i;
       for (int j = i+1; j <=n-1; j++)
       {
        if ( arr[j]<arr[mini])
        {
            
       mini=j;

        }
      }
       int temp=arr[mini];// outside the loop because first we want the minimum ekement and after getting the minimum ekement one final swapping is done after iterating the whole array
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