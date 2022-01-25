#include<bits/stdc++.h>
using namespace std;

int getmin(int arr[],int size)
{
    int mino=INT_MAX;
    for(int i=0;i<size;i++){

        mino=min(mino,arr[i]);
        //if(arr[i]<mino){
         //   mino=arr[i];
       // }
    }
    return mino;
}


int getmax(int arr[],int size)
{
     int maxo=INT_MIN;
     for(int i=0;i<size;i++)
     {
         maxo=max(maxo,arr[i]);
         //if(arr[i]>maxo){
          //   maxo=arr[i];
         //}
     }

    return maxo;
}


int main()
{    

    int size;
    cin>>size;
    int a[1000];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
        //cout<<end;
    }
    
    cout<<getmax(a,size)<<endl;
    cout<<getmin(a,size)<<endl;

    return 0;
}