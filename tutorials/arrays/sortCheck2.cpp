#include<iostream>
using namespace std;
int main()
{
    int arr[5]={20,20,45,89,9};
    int f=0;
    for(int i=1;i<4;i++)
    {
        if(!(arr[i+1]>=arr[i]&&arr[i]>=arr[i-1]))
        {
            f=-1;
            break;
        }
    }
    if(f==-1)
    {
        cout<<"not in ascending order";
    }
}