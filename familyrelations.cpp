#include<bits/stdc++.h>
using namespace std;


/*

int noOfChildren(map<string,vector<string> > m,string father)
{
    //basecase
    if(m[father].size()==0)
    {return 0;}
    int res=0;
    for(int i=0;i<m[father].size();i++)
    {  
       res=res+noOfChildren(m,m[father][i])+1;
        
    }
  
    return res;
}
*/

int main()
{
    string arr[4][2]={{"luke","shaw"},{"wayne","rooney"},{"rooney","ronaldo"},{"shaw","rooney"}};
    map<string,vector<string> > m;
    
    for(int i=0;i<4;i++)
    {
        
        if(m[arr[i][1]].size()==0)
        {    
            m[arr[i][1]]=vector<string>();
            m[arr[i][1]].push_back(arr[i][0]);
           
        }
        else
        {
            m[arr[i][1]].push_back(arr[i][0]);
        }
    }
    string input;
    cout<<"enter the name to which grandchildren has to be found: ";
    cin>>input;
    int res=0;
    for(int i=0;i<m[input].size();i++)
    {
        res+=m[m[input][i]].size();
    }
    cout<<res;
    //cout<<noOfChildren(m,"ronaldo");
    
}
