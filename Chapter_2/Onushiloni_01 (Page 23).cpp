/**
    Onushiloni_01 (Page 23)
           দুটি দ্বিমাত্রিক (2D) বিন্দুর স্থানাঙ্ক (Co-Ordinate) ইনপুট নিয়ে তাদের মাঝের দূরত্ব প্রিন্ট কর।
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author Md. Sadikul Islam
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,y1,y2,d;
    cout<<"Enter the Co-Ordinate: ";
    cin>>x1>>x2>>y1>>y2;
    d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<"Distance is: "<<d<<endl;

    return 0;
}

