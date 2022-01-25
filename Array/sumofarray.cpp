#include<bits/stdc++.h>
using namespace std;

int sum(int ar[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=ar[i];
    }
    return ans;
}

int main()
{
     int n;
     cin>>n;
     int arr[100];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     cout<<"The total sum of the given array is = "<<sum(arr,n)<<endl;

     return 0;
}