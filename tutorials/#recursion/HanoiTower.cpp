#include<iostream>
using namespace std;
void TOH(int n,char a,char b,char c)
{
    if(n==2)
    {
        cout<<"Disk"<<n-1<<":"<< a<<"to"<<b<<endl;
        cout<<"Disk"<<n<<":"<<a<<"to"<<c<<endl;
        cout<<"Disk"<<n-1<<":"<<b<<"to"<<c<<endl;
        return;
    }
    TOH(n-1,a,c,b);
    cout<<"Disk"<<n<<":"<<a<<"to"<<c<<endl;
    TOH(n-1,b,a,c);
}
int main()
{
    int n=4;
    char a='A';
    char b='B';
    char c='C';
    TOH(3,a,b,c);
}