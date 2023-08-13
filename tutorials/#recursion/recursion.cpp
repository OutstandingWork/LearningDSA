#include<iostream>
using namespace std;

int fib(int a,int b,int c,int n,int k)
{
    if(n==k)
    return a;
    else{
        c=a+b;
        a=b;
        b=c;
        k++;
        return fib(a,b,c,n,k);
    }
}
int main()
{
   int n=2;
   cout<<fib(0,1,1,n,0);
    return 0;
}