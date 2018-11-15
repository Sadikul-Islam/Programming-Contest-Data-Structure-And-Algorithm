
/**
    No.16__Onushiloni_Ascending (Page 28).cpp
          তিনটি সংখ্যা ইনপুট নিয়ে তাদের ছোটো হতে বড় অনুসারে প্রিন্ট কর।
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1<num2 && num2<num3)
    {
        cout<<num1<<" "<<num2<<" "<<num3<<endl;
    }
    else if(num1<num3 && num3<num2)
    {
        cout<<num1<<" "<<num3<<" "<<num2<<endl;
    }
    else if(num2<num1 && num1<num3)
    {
        cout<<num2<<" "<<num1<<" "<<num3<<endl;
    }
    else if(num2<num3 && num3<num1)
    {
        cout<<num2<<" "<<num3<<" "<<num1<<endl;
    }
    else if(num3<num1 && num1<num2)
    {
        cout<<num3<<" "<<num1<<" "<<num2<<endl;
    }
    else if(num3<num2 && num2<num1)
    {
        cout<<num3<<" "<<num2<<" "<<num1<<endl;
    }

    return 0;
}
