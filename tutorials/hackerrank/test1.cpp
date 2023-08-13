#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int op[t];
    
    for(int i=0;i<t;i++)
    {
        int n;int div;
        cin>>n;
        int skill[n];
        for(int j=0;j<n;j++)
        {
            cin>>skill[j];
        }
        sort(skill,skill+n);
        div=(skill[n-2]-skill[0])+(skill[n-1]-skill[1]);
        op[i]=div;
    }
    for(int i=0;i<t;i++)
    {
        cout<<op[i]<<endl;
    }
    return 0;
}
