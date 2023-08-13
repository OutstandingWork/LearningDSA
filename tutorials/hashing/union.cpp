#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10,20,30};
    int b[]={40,50};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    cout<<m<<" "<<n;
    unordered_set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        s.insert(b[i]);
    }
    cout<<s.size();
}