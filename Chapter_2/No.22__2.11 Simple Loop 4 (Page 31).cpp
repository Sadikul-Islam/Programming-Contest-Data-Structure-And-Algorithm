
/**
    No.22__2.11 Simple Loop 4 (Page 31).cpp
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,i,n,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            sum=sum+j;
        }
    }
    cout<<sum<<endl;

    return 0;
}
