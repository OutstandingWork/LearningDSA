#include<bits/stdc++.h>
using namespace std;
int Consecutive(int arr[],int n)
{
    int res=1;
    unordered_set<int> s(arr,arr+n);
    for(auto x:s)
    {
        if(s.find(x-1)==s.end())
       
        {
            int curr=1;
            while(s.find(x+curr)!=s.end())
            {
                curr++;
            }
            res=max(res,curr);
        }

    }
    return res;

}

int main()
{
    int arr[]={1,2,3,4,7,8,4,6,5};
    cout<<Consecutive(arr,9);

}