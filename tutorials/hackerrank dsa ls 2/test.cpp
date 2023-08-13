#include <iostream>
#include <string>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

vector<string> generateCombinations(int n) {
    int numCombinations = pow(2, n);
    vector<string> v;
    for (int i = 0; i < numCombinations; i++) {
        string combination;
        for (int j = n - 1; j >= 0; j--) {
            if ((i & (1 << j)) != 0) {
                combination += '&';  
            } else {
                combination += '@';  
            }
        }
        v.push_back(combination);
    }
    return v;
}

int main() {
    string s;
    cin>>s;
    int n;
    cin>>n;
    int f=1;int c=1;

    vector<string> v=generateCombinations(n);
    for(int i=0;i<s.length();i++)
    {
        if(!(s[i]=='@'||s[i]=='&'))
        {
            c=0;break;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(s.find(v[i])==string::npos)
         {
            
            f=0; 
            break;
            }
    }
    if(f==1&&c==1) cout<<1;
    else cout<<0;
    cout<<v.size()<<" ";
    cout<<v[0][0];
    return 0;
}
