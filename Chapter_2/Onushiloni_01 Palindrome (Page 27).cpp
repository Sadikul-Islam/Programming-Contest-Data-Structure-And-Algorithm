
/**
    Onushiloni_01 Palindrome (Page 27).cpp
          প্যালিনড্রম (Palindrome) হলো সেই জিনিস যা সামনে থেকে পড়তেও যা, পেছন থেকে পড়তেও তা। যেমন কিছু প্যালিনড্রম সংখ্যা হলোঃ  1,2,3,...9,11,22,33,...99,101,111,121,...  তোমাকে n তম প্যালিনড্রম সংখ্যা প্রিন্ট করতে হবে। (n<100)
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,temp,rev,rem,nth_Number;
    cin>>n;
    num=1;
    while(1)
    {
        temp=num;
        rev=0;
        while(temp)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }

        if(num==rev)
        {
            n--;
        }

        if(n==0)
        {
            nth_Number=rev;
            break;
        }
        num++;

    }
    cout<<nth_Number<<endl;

    return 0;
}
