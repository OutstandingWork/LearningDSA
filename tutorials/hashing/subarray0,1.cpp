// This problem is discussed in video by replacing 0 with -1 and put sum=0
//This implementation might not work in every cases
#include<bits/stdc++.h>
using namespace std;
int isPair(int arr[],int n)
{
    unordered_map<int,int> m;
    int pre_sum=0;int res=0;
    
    for(int i=0;i<n;i+=2)
    {
       int sum=i/2;
        pre_sum=pre_sum+arr[i];
        
        if(m.find(pre_sum)==m.end())
        m.insert({pre_sum,i});
        if(m.find(pre_sum-sum)!=m.end())
        res=max(res,(i-m[pre_sum-sum])/2);
    }
    return res;
}
int main()
{
    int arr[]={1,0,1,1,1,0,0};
    cout<<isPair(arr,7);
}