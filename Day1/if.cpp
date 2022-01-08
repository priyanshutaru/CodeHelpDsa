#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=17;
    int t=17;
   /* if(p<t){
        cout<<"Taru Birthday"<<endl;
    }
    if(p=t){
        cout<<"Both Love Each Other Equaly"<<endl;
    }
    if(p>t){
        cout<<"Priyanshu Bithday"<<endl;
    }*/


    if(p==t){
        cout<<"yes"<<endl;

    }
    else{
        cout<<"no"<<endl;
    }

    if(p==t){
        cout<<"5"<<endl;

    }
    else if(p>t){
        cout<<"4"<<endl;
    }
    else{
        cout<<"3"<<endl;
    }

    int time=20;
    string result = (time>18)?"Good day.":"Good Evining";
    cout<<result;
    return 0;

}