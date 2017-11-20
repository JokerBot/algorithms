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
 
  for (int i = 0; i <26; ++i) {
    char letter= 'a'+i;
    node *pChild = temphead.child[i];
    if (pChild) {
      prefix.push_back(letter);
      traverse(prefix, *pChild);
      prefix.pop_back();
    }
  }
}
 

void refix(string &s)
{ node *current=head;
    for(unsigned int i=0;i<s.length();++i)
    
    {  int letter=(int)s[i] - (int)'a';
                current=current->child[letter];
        }
      traverse(s,*current);
      return;
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
    cout<<"enter the common prefix";
    cin>>s;
   refix(s);
  }

  return 0;
}

