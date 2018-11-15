/**
    Onushiloni_01 (Page 24)
           একটি ত্রিভুজের শীর্ষবিন্দুগুলোর স্থানাঙ্ক দেওয়া আছে, ক্ষেত্রফল প্রিন্ট করো।
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author Md. Sadikul Islam
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,x3,y1,y2,y3,A;
    cout<<"Enter the Co-Ordinate: ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    A=0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
    cout<<"Area is: "<<A<<endl;

    return 0;
}
