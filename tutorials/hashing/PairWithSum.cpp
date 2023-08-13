#include<bits/stdc++.h>
using namespace std;
bool isPair(int arr[],int n,int sum)
{
    unordered_set<int> h;
    for(int i=0;i<n;i++)
    {
        if(h.find(sum-arr[i])!=h.end())
        return true;
        else
        h.insert(arr[i]);
    }
    return false;
}