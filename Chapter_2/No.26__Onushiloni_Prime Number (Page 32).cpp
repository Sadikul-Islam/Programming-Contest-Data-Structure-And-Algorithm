
/**
    No.26__Onushiloni_Prime Number (Page 32).cpp
          কোনো একটি সংখ্যা  n মৌলিক (Prime) হবে যদি সেটি 1 থেকে বড় হয় এবং 1 বা n ছাড়া আর কোনো ধনাত্মক সংখ্যা দিয়ে বিভাজ্য না হয়। তোমাকে n দেওয়া আছে বলতে হবে এটি মৌলিক কি মৌলিক নয়।
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,j=0;
    cin>>num;
    for(i=1; i<=num; i++)
    {
        if((num%i)==0)
        {
            j++;
        }
    }

    if(j==2)
        cout<<num<<" is a prime number."<<endl;
    else
        cout<<num<<" is not a prime number."<<endl;

    return 0;
}
