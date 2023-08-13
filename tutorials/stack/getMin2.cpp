#include<bits/stdc++.h>
using namespace std;
struct Stack{
    stack<int> ms;int res=-1;
    void push(int x)
    {
        if(ms.empty()) {ms.push(x); res=x;}
      if(x<res)
      {
        res=x;
        ms.push(x-res);
      }
      else ms.push(x);
    }
    

    void pop()
    {
        if(ms.top()<=0) {res=abs(ms.top())+res;ms.pop();}
       else ms.pop();
    }
    int top() 
    {

        if(ms.top()<=0)
        {
            return abs(ms.top())+res;
        }
        else 
        return ms.top();
    }
    int getMin(){return res;}

};



    int main()
{
    Stack s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
 
    cout<<" Minimum Element from Stack: " <<s.getMin();
  
    return 0; 
}
