
/**
    No.23__Onushiloni_03_Series (Page 32).cpp
    1^1+2^2+3^3+...+n^n
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum=sum+pow(i,i);
    }
    cout<<sum<<endl;

    return 0;
}
