#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
using namespace std;
 
struct node
{
 
	bool isEnd;
	struct node *child[26];
}*head;
 
void init()
{
//	head = (node*)malloc(sizeof(node));
	head = new node();
	head->isEnd = false;
 
}
 
void insert(string word)
{
	node *current = head;
 
 
	for(unsigned int i = 0 ; i < word.length(); ++i)
	{
		int letter = (int)word[i] - (int)'a';	//extrct first character of word
		if(current->child[letter] == NULL)
			current->child[letter] = new node();
 
	;
		current = current->child[letter];		
	}
	current->isEnd = true;
}
 
bool search(string word)
{
	node *current = head;
	for(unsigned int i = 0 ; i < word.length(); ++i)
	{
		int letter = (int)word[i] - (int)'a';
		if(current->child[letter] == NULL)
			return false;		//not found
		current = current->child[letter];
	}
	return current->isEnd;
}
 
 
 
 
 
 
void traverse(string &prefix, node &temphead) {
  if (temphead.isEnd)
    {cout<<prefix<<endl;}
 
  for (int index = 0; index <26; ++index) {
    char next = 'a'+index;
    node *pChild = temphead.child[index];
    if (pChild) {
      prefix.push_back(next);
      traverse(prefix, *pChild);
      prefix.pop_back();
    }
  }
}
 
 
int main()
{ string s,x;
int n;
  
  init();
  cout<<"enter the number of strings"<<endl;
  cin>>n;
  cout<<"enter the strings"<<endl;
  
  for(int i=0;i<n;i++)
  { cin>>x;
    insert(x);}
   s="";
   cout<<"sorted list:"<<endl;
  traverse(s,*head);
  return 0;}
