#include<bits/stdc++.h>
using namespace std;

struct node{
  
  int data;
  node *next;
}*head=NULL;

//node *head=new node;


node* insert(int val,node *head)
{   node *newnode= new node;
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    else
    {   node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return head;
    }
}

void display(node *head)
{
    if(head==NULL)
    {return;}
    else
    {
        cout<<head->data<<" ";
        display(head->next);
    }
}    
    
int main()
{  
   
  head=insert(1,head);
  head=insert(2,head);
  head=insert(3,head);
  
  head=insert(4,head);
  head=insert(5,head);
  head=insert(6,head);
  head=insert(7,head);
  display(head);    
}

