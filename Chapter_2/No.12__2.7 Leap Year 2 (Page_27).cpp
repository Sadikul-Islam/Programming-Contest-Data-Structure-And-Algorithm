
/**
    2.7 Leap Year 2 (Page_27).cpp
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year: ";
    cin>>year;
    if(year%400==0 || (year%100!=0 && year%4==0))
    {
        cout<<year<<" is Leap Year"<<endl;
    }
    else
    {
        cout<<year<<" is not Leap Year"<<endl;
    }

    return 0;
}
