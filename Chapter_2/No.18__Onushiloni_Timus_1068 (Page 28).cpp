
/**
    No.18__Onushiloni_Timus_1068 (Page 28).cpp
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    if(n>0)
    {
        cout<<n*(n+1)/2<<endl;
    }

    else
    {
        cout<<1+n*(1-n)/2<<endl;
    }

    return 0;
}
