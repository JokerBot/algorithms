#include<bits/stdc++.h>
using namespace std;

int main()
{   int flag=0;
    vector<int>x,y;
    string str;
    cin>>str;
   
    int len=str.length();
     
    for(int i=0;i<len;i++)
    {  if(str[i]=='(')
        {x.push_back(i);}
        else
        { y.push_back(i);}
    }
    
    int xlen=x.size();
    int ylen=y.size();
     
    if(xlen==ylen)
    { for(int i=0;i<xlen;i++)
        { 
            int diff=x[i]-y[i];
            if(diff>0)
            {flag=1;break;}
        }
     }
     else{flag=1;}
     
     if(flag==0)
     {cout<<xlen;}
     else
     {cout<<-1;}
    
  return 0;
}
