/**
    No.24__Onushiloni_03_Pyramid Print (Page 32).cpp
        *
      * * *
    * * * * *
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    ///n=3;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout <<"  ";
        }
        k=0;
        while(k!=2*i-1)
        {
            cout << "* ";
            k++;
        }
        cout << endl;
    }

    return 0;
}
