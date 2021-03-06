#include<bits/stdc++.h>
using namespace std;

int calc(string s1,string s2,int pos1,int pos2)
{
   //if both has reached end+1 it means it is statisfied
   if(pos1==s1.length() && pos2==s2.length()){return 1;}
   
   if(s2[pos2]=='?' || s1[pos1]==s2[pos2]){return calc(s1,s2,pos1+1,pos2+1);}
   if(s2[pos2]!='*'){return 0;}
  
   //increment pos2 till last of *
   while(pos2+1<s2.length() && s2[pos2+1]=='*')
   {pos2++;}
  
   //recur for every pos1 value
   while(pos1<s1.length() && pos2<s2.length())
   {   
       //it acts as base case for true
       if(pos2==s2.length()-1){return 1;}
       
       if(calc(s1,s2,pos1,pos2+1)){return 1;}
       pos1++;
       
   }
   return 0;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    cout<<calc(s1,s2,0,0);
}
