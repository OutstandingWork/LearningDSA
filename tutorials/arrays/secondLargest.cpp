#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,4,7,3};
    int l,sl;
    for(int i=0;i<5;i++)
    {
        if(l<arr[i])
        l=arr[i];
        if(arr[i]>sl&&arr[i]<l)
        sl=arr[i];
    }
    cout<<l<<" "<<sl;
}