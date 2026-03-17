#include<iostream>
using namespace std;
int bubblesort(int *ptr,int n){// when array is passed in function then it is passed by reference so it can be stored in the pointers also  
    int isswapped=0;
    for (int  i = 0; i <n-1; i++)
    {
        for (int j = 0; j <n-1-i; j++)// everytime it is not necessary to iterate till the last because the largest element will shift toward the last and there wont be any need to check 
        {
           if (ptr[j]>ptr[j+1])
           {
           int temp= ptr[j];
           ptr[j]=ptr[j+1];
           ptr[j+1]=temp;
           isswapped=1;
           }
          if (isswapped==0)// if it will be equal to 0 then array is arranged in the ascending order and there would not be any need to check further
          {
            break;
          }
           
        }
      return 0;  
    }
    for (int  i = 0; i < n; i++)
    {
       cout<<ptr[i]<<" ";
    }
    
    
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    bubblesort(arr,n);
    
    return 0;
}