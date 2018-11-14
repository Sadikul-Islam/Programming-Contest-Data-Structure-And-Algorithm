/**
    2.6 Leap Year (Page_26).cpp
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if(year%400==0)
    {
        cout<<year<<" is Leap Year"<<endl;
    }
    else if(year%100==0)
    {
        cout<<year<<" is not Leap Year"<<endl;
    }
    else if(year%4==0)
    {
        cout<<year<<" is Leap Year"<<endl;
    }
    else
    {
        cout<<year<<" is not Leap Year"<<endl;
    }

    return 0;
}
