#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number "<<endl;

    cin>>n;

    int i=2;
    while (i<n )
    {
        if(n%i==0)
        {
            cout<<"Number is not prime for"<<i<<endl;
        }
        else
        {
            cout<<"Number is prime for"<<i<<endl;
        }
        i=i+1;
    }
    
}