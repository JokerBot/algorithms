#include<bits/stdc++.h>
using namespace std;

struct node{
    
vector<int> adj;    
};

node vertices[100];
bool mark[100];
void dfs(int start)
{
    stack<int> st;
    
    st.push(start);
    
    
    while(!st.empty())
    {
        int xt=st.top();
        st.pop();
        if(!mark[xt])
        {
        mark[xt]=true;
        cout<<"visiting "<<xt<<endl;
        
           for(int i=vertices[xt].adj.size()-1;i>=0;i--)
           {
            
                if(!mark[vertices[xt].adj[i]])
                {
                st.push(vertices[xt].adj[i]);
                }
            
           }
        }
        
      }
    
    
}




int main()
{
    int N,el,e;
cout<<"enter the number of vertices"<<endl;
cin>>N;

  for(int i=0;i<N;i++)
   {
     cout<<"enter no. of directly connected nodes for node "<<i<<endl;
      cin>>el;
      cout<<"enter edges that are directly connected";
                for(int j=0;j<el;j++)
                { 
                   cin>>e; vertices[i].adj.push_back(e);    
                }
    
   }
dfs(0);
   
}
