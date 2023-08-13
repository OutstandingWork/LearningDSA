#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> howmany(n); 
    vector<int> whoare;
    
    for (int i = 0; i < n; i++) 
    {
        int k;
        cin >> k;
        howmany[i] = k;
        
        for (int j = 0; j < k; j++) {
            int element;
            cin>>element;
            whoare.push_back(element);
        }
    }
     map<int, int> res;

    for (int i = 0; i < whoare.size(); i++) 
    {
        res[whoare[i]]++;
    }
    int c=0;
    int element=0;
    for (const auto& pair : res) 
    {
        
        if(pair.second>c)
        {
            c=pair.second;
            element=pair.first;
        }
    }
    cout<<element;
    return 0;
}
