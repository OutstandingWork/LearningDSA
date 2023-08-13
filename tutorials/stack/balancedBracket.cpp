#include<bits/stdc++.h>
using namespace std;
char balance(char a)
{
    if(a=='[')
    return ']';
    if(a=='{')
    return '}';
    if(a=='(')
    return ')';
    return ' ';
}
int main()
{
string s="{)[()]";

stack<char> c;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='{'||s[i]=='['||s[i]=='(')
    c.push(s[i]);
    if(balance(c.top())==s[i])
    c.pop();
}
if(c.empty())
cout<<"Balanced";
else
cout<<"not balanced";
}