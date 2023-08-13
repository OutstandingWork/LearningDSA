#include<iostream>
#include<cmath>
using namespace std;
int r=0;
int ropeCut(int n,int a,int b,int c)
{ 
    if(n<0)
    {
        return -1;
    }
    if(n==0)
    {
        return 0;
    }
    int res=max(ropeCut((n-a),a,b,c),max(ropeCut((n-b),a,b,c),ropeCut((n-c),a,b,c)));
    if(res==-1)
    return -1;
    return res+1;
}



int main()
{
    int n=9,a=2,b=2,c=2;
    cout<<ropeCut(n,a,b,c);
}