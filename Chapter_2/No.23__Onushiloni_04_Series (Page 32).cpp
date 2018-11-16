
/**
    No.23__Onushiloni_04_Series (Page 32).cpp
    1+(2+3)+(4+5+6)+...+ nth term
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,sum=0;
    cin>>n;
    k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum=sum+k;
            k++;
        }
    }
    cout<<sum<<endl;

    return 0;
}
