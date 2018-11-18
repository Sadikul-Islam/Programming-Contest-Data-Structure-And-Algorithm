
/**
    No.30__Onushiloni_01_LightOJ_1001 (Page 33).cpp
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        if(n>10)
        {
            cout<<n-10<<" "<<"10"<<endl;
        }
        else
        {
            cout<<"0"<<" "<<n<<endl;
        }
    }

    return 0;
}
