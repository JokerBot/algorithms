#include <iostream>
#include<string>
#include<stdlib.h>
#include<vector>

using namespace std;

struct node{
     bool isend;
     struct node *child[26];
     int weight;
    
}*head;

void init()
{ head=new node();
  head->isend=false;
}

void inser(string &word,int w)
{ node *current= head; 
  for(unsigned i=0;i<26;++i)
  { int letter= (int)word[i] - (int) 'a';
     if(current->child[letter]==NULL)
     {current->child[letter]=new node();}
     current=current->child[letter];
      
  }current->isend= true;
   current->weight= w;
}

void traverse(node &temphead)
{  int flag=1; vector<int> v;

  for(unsigned int i=0;i<26;++i)
  { 
     node *pchild = temphead.child[i];
     if(pchild)
      {  flag=0;
         if(pchild->isend)
         {v.push_back(pchild->weight);}
         traverse(*pchild);
      }
  }  
      if(flag){cout<<-1;}
      else
      { //nt x =max_element(v.begin(), v.end());
          cout<<v.front();
         v.clear();}
return;}

void point(string &word)
{ node *current=head;cout<<"c";
for(unsigned int i=0;i<word.length();++i)
  { cout<<"check";
     int letter= (int)word[i] -(int) 'a'; 
     current=current->child[letter];
  }
traverse(*current);
return;
}

int main()
{ string x,y;
  int d,q,w;
  init();
    cin>>d;
    cin>>q;
    for(int i=0;i<d;++i)
    {cin>>x;
    cin>>w;
     inser(x,w);
    }
    for(int j=0;j<q;++j)
    { cin>>y;
      cout<<"ok";
      point(y);
      cout<<"e";
    }  
            
    return 0;
}
