
/**
    No.27__Onushiloni_Factorial (Page 32).cpp
    n! (n ফ্যাক্টোরিয়াল)  নির্ণয় কর।
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,fact=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    cout<<fact<<endl;

    return 0;
}
