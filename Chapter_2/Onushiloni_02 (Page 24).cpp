/**
    Onushiloni_02 (Page 24)
            একটি ত্রিভুজের তিনটি বাহুর দৈর্ঘ দেওয়া আছে, তার তিনটি কোণ নির্ণয় কর।
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,X,Y,Z,X_Degree,Y_Degree,Z_Degree;
    cout<<"Enter The Values of Lines: ";
    cin>>a>>b>>c;
    X=acos((b*b+c*c-a*a)/(2*b*c));
    X_Degree=(X*180)/M_PI;
    Y=acos((a*a+c*c-b*b)/(2*a*c));
    Y_Degree=(Y*180)/M_PI;
    Z=acos((a*a+b*b-c*c)/(2*a*b));
    Z_Degree=(Z*180)/M_PI;
    cout<<"The three angles are: "<<X_Degree<<" "<<X_Degree<<" "<<X_Degree<<endl;

    return 0;
}
