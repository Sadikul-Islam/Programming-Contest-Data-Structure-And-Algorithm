/**
    No.24__Onushiloni_04_Pyramid Print (Page 32).cpp
       12321
        121
         1
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a,m;
    ///n=3;
    cin>>n;
    for(i=n; i>=1; i--)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
        a=k-2;
        for(m=a;m>=1;m--)
        {
            cout<<m;
        }
        cout<<endl;
    }

    return 0;
}
