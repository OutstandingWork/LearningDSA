#include<iostream>
using namespace std;
int SumOfDigits(int n,int sum)
{
    if(n==0)
    return sum;
    else{
        sum=sum+(n%10);
        n=n/10;
        return SumOfDigits(n,sum);
    }}
    int main()
    {
        int n=908;
        cout<<SumOfDigits(n,0);
    }
