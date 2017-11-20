//longest common prefix
#include<iostream>
#include<string>
using namespace std;


struct node{
    bool isend;
    node *child[26];
}*head;

void init()
{
    head=new node;
    head->isend=false;
}

void insert(string word)
{
    node *current=head;
    
    for(int i=0;i<word.length();i++)
    {
        int letter=(int)word[i] -(int)'a';
        if(current->child[letter]==NULL){current->child[letter]=new node;}
        current=current->child[letter];
    }
    
    current->isend=true;
    
}

string prefix(node *head,string s)
{  
    node *current=head;
    int cnt=0;
    int loc;
    for(int i=0;i<26;i++)
    {
        if(current->child[i]!=NULL){cnt++;loc=i;}
    }
    
    //basecase
    if(cnt!=1){return s;}
    
    s=s+(char)(loc+(int)'a');
    
    //basecase
    if(current->child[loc]->isend==true){return s;}
    
    return prefix(current->child[loc],s);
}


int main()
{
    init();
    insert("appl");
    insert("a");
    insert("appleil");
    cout<<prefix(head,"");
    
    
    
}

