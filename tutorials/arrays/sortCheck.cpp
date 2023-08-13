#include<iostream>
using namespace std;
int main()
{
    int arr[5]={20,20,45,89,89};
    int f=0;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(!(arr[j]>=arr[i]))
            
            {
                f=-1;
                break;
            }
        }
    }
    if(f==-1)
    {
        cout<<"not in ascending order";
    }
}