#include<bits/stdc++.h>
using namespace std;
 
 int binarysearch(int arr[],int size,int key)
    {
     int start=0;
     int end= size-1;
     int mid;
     while (start<=end) 
     {
        mid= start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
     }
     return -1;
    }

// void printarray(int arr[],int size)



int main()
{   
   /* int n;
    cin>>n;
    int key;
    cin>>key;
    int b[1000];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }*/
    int size=5;
    int arr[5]={45,05,17,30,14};
    int key=14;
    cout<<binarysearch(arr,5,14);
    cout<<endl;

    return 0;
}