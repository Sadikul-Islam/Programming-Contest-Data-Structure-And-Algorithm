
/**
    No.20__2.9 Simple Loop 2 (Page 29).cpp
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=100,cnt=0;
    while(x%2==0)
    {
        x=x/2;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
