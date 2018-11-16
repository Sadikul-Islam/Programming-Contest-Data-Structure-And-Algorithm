/**
    No.24__Onushiloni_02_Pyramid Print (Page 32).cpp
    ***
     **
      *
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    ///n=3;
    cin>>n;
    for(i=n; i>=1; i--)
    {
        for(j=n; j>i; j--)
        {
            cout<<" ";
        }
        for(k=1; k<=i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
