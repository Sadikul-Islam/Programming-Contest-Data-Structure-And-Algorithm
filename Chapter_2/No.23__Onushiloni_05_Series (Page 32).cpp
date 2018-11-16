
/**
    No.23__Onushiloni_05_Series (Page 32).cpp
    1-2+3-4+5+... nth term
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,sum=0,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            j=i*-1;
            sum=sum+j;
        }
        else
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;

    return 0;
}
