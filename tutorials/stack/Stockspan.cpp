#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];int span[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // NAIVE SOLUTION
    // for(int i=0;i<n;i++)
    // {
    //     int p=arr[i];int c=1;
    //     for(int j=i;j>=0;j--)
    //     {
    //         if(j==i) continue;
    //         if(arr[j]<p)
    //         {
    //             c++;
    //         }
    //         else break;
    //     }
    //     span[i]=c;
    //     }
    //     for(int i=0;i<n;i++)
    //     {
    //         cout<<span[i]<<" ";
    //     }

    stack<int> s;
    s.push(0);
    cout<<1<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]<=arr[i])
        {
            s.pop();
        }
        int span=(s.empty())?(i+1):(i-s.top());
        cout<<span<<" ";
        s.push(i);
    }
}
