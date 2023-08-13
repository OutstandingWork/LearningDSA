#include<bits/stdc++.h>
using namespace std;
char balance(char a)
{
    if(a=='a')
    return 'z';
    if(a=='b')
    return 'y';
    if(a=='c')
    return 'x';
    if(a=='d') return 'w';
    if(a=='e') return 'v';
    if(a=='f') return 'u';
    if(a=='g') return 't';
    if(a=='h') return 's';
    if(a=='i') return 'r';
    if(a=='j') return 'q';
    if(a=='k') return 'p';
    if(a=='l') return 'o';
    if(a=='m') return 'n';
    return ' ';
}
int main()
{
    int n;
    cin>>n;
 char s[n];
 for(int i=0;i<n;i++)
 {
    cin>>s[i];
 }
 stack<char> c;
 
for(int i=0;i<s.length();i++)
{
    if(s[i]=='a'||s[i]=='b'||s[i]=='c'||s[i]=='d'||s[i]=='e'||s[i]=='f'||s[i]=='g'||s[i]=='h'||s[i]=='i'||s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='m')
    c.push(s[i]);
    if(balance(c.top())==s[i])
    c.pop();
}
if(c.empty())
cout<<"true";
else
cout<<"false";
}