#include<bits/stdc++.h>
using namespace std;
void DC(int arr[],int n,int k)
{
    unordered_map<int,int> m;
    for(int i=0;i<k;i++)
    {
        if(m.find(arr[i])==m.end())
        m[arr[i]]=1;
        else
        m[arr[i]]++;
    }
    cout<<m.size()<<" ";
    for(int i=k;i<n;i++)
    {
        if(m[arr[i-k]]==1)
        m.erase(arr[i-k]);
        else
        m[arr[i-k]]--;
        if(m[arr[i]]==0)
        m[arr[i]]++;
        cout<<m.size()<<" ";
    }
}
int main()
{
    int arr[] = {10, 10, 5, 3, 20, 5};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    DC(arr, n, k);
}