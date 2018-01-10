#include<bits/stdc++.h>
using namespace std;

 void calc(string parent,int cnt,string s)
 {//cout<<parent<<endl;
     if(cnt==2)
     {
         cout<<s+parent[0]+parent[1]<<endl;
         cout<<s+parent[1]+parent[0]<<endl;
     }
     else
     {   string s2=parent+parent;
         cout<<"--------------------"<<endl;
         for(int i=0;i<parent.length();i++)
         {   
             string s3="";
             int tcnt=cnt-1;
             int j=i+1;
             
             while(tcnt!=0)
             {
                 s3+=s2[j];
                 --tcnt;
                 j++;
             }
             
             calc(s3,cnt-1,s+s2[i]);        
         }
         
     }
     
     
 }
 
 
 
 

 
int main()
{
    string s="123456";
    calc(s,s.length(),"");
}
