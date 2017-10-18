#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100];
bool inperm[100];
int curperm[100];

void generate(int pos)
{
    
    if(pos==n)
    {
        for(int i=0;i<n;i++)
        {cout<<curperm[i]<<" ";}
        cout<<endl;
        
    }
    for(int i=0;i<n;i++)
    {
        if(!inperm[i])
        {
            curperm[pos]=arr[i];
            inperm[i]=true;
            generate(pos+1);
            inperm[i]=false;
        }
        
        
    }
    
    
    
}



int main()
{
  n=3;
arr[0]=1;
arr[1]=2;
arr[2]=3;
generate(0);
    
}
