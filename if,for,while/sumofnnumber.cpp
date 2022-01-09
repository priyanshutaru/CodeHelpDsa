#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;

    int i=1;
    int sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i= i+1;
    }
    cout<<endl;
    cout<<"The sum is "<<sum <<endl;
    
}