/**
    No.23__Onushiloni_06_Series (Page 32).cpp
    1+(2+3*4)+(5+6*7+8*9*10)+...+ nth term
    Purpose: Solve the book "Programming Contest, Data Structure And Algorithm" by Md. Mahbubul Hasan"
    @author: Md. Sadikul Islam Shuvo
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,num1=1,num2=1,sum=0,temp;
    cin>>n;
    while(1)
    {
        for(i=1; i<=num1; i++)
        {
            temp=1;
            for(j=1; j<=i; j++)
            {
                temp=temp*num2;
                num2++;
                if(num2>n)
                {
                    num2=0;
                    break;
                }
            }
            sum=sum+temp;
            if(num2==0)
            {
                break;
            }
        }
        if(num2==0)
        {
            break;
        }
        num1++;
    }
    cout<<sum<<endl;

    return 0;
}
