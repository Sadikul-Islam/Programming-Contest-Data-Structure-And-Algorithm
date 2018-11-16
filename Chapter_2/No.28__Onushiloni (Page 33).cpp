
/**
    No.28__Onushiloni (Page 33).cpp
   n ও r দেওয়া আছে, তোমাকে (n  r) = n!/r!(n-r)! প্রিন্ট করতে হবে।
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    double fact1,fact2,fact3;
    cin>>n>>r;
    fact1=factorial(n);
    cout<<fact1<<endl;
    fact2=factorial(r);
    fact3=factorial(n-r);
    cout<<fact1/(fact2*fact3)<<endl;

    return 0;
}
