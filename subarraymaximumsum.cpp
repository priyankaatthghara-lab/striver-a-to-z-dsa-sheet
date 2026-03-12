// leetcode: 53_maximumsubarray.cpp
#include<iostream>
using namespace std;

int maximumsumsubuarray(int arr[],int n){//returning maximum subarray sum

    int currsum=0;
    int maxsum=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
       currsum=currsum+arr[i];
       maxsum=max(maxsum,currsum);
       if (currsum<0)
       {
        currsum=0;
       }
        
    }
    return maxsum;
}
int takinginput(int arr[],int n){// function for taking input from the user
    for (int i = 0; i < n; i++)
    {
     cin>>arr[i];// taking input from the user
    }
   return 0; 
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int arr[n];
    int input=takinginput(arr,n);// callinig function for  taking input for array
    int subarray=maximumsumsubuarray(arr,n);// calling function for  maximum subarray
    cout<<"The maximum sum of the given array is :"<<subarray;
    
    return 0;
}