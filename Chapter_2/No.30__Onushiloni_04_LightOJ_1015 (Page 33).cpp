/**
    No.30__Onushiloni_04_LightOJ_1015 (Page 33).cpp
    1363352	    1015 - Brush (I)	C++	    0.016	Accepted
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,sum=0,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(int j=1; j<=n; j++)
        {
            cin>>m;
            if(m<0)
                continue;
            sum=sum+m;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum=0;
    }

    return 0;
}
