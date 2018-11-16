
/**
    No.17__Onushiloni_Quadrant (Page 28).cpp
         একটি স্থানাঙ্ক দেওয়া আছে, তোমাকে বলতে হবে সেটা কোন  Quadrant এ পরে।
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"First Quadrant"<<endl;
    }
    else if(x<0 && y>0)
    {
        cout<<"Second Quadrant"<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<<"Third Quadrant"<<endl;
    }
    else if(x>0 && y<0)
    {
        cout<<"Fourth Quadrant"<<endl;
    }

    return 0;
}
