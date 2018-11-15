/**
    Onushiloni_03 (Page 24)
            একটি ত্রিভুজের তিনটি বাহুর দৈর্ঘ দেওয়া আছে, তার তিনটি ক্ষেত্রফল নির্ণয় কর।
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,Area;
    cout<<"Enter The Values of Lines: ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area is: "<<Area<<endl;

    return 0;
}
