#include<iostream>
#include<cmath>
using namespace std;
int CountSubsets(int arr[],int n,int sum)
{
    if(n==0)
    return (sum==0)?1:0;
    return CountSubsets(arr,n-1,sum)+CountSubsets(arr,n-1,sum-arr[n-1]);

}

int main()
{
    int arr[]={15,10,20};
    int sum=37;
    cout<<CountSubsets(arr,3,sum);
}