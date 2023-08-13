#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

std::vector<int> fibonacciSequence(int n) {
    std::vector<int> sequence;
    int a = 1;
    int b = 2;

    while (a <= n) {
        sequence.push_back(a);
        int temp = a;
        a = b;
        b = temp + b;
    }

    return sequence;
}

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    std::vector<int> result = fibonacciSequence(n);
    

  
    return 0;
}
