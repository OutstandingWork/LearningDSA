#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int a,b;int f=0;
    cin>>a;cin>>b;
    int pos=a-1;
    for(int i=pos;i<n;i=i+v[i])
    {
       if(v[i]==0)
       {
        break;
       }
        if(i>=(b-1))
        {
            f=1;
            break;
        }
    }
    if(f==1) cout<<1;
    else cout<<0;
}