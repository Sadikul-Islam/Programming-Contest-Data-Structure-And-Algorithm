
/**
    No.24__Onushiloni_01_Pyramid (Page 32).cpp
    *
    **
    ***
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    ///n=3;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
