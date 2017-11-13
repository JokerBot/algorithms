#include<bits/stdc++.h>
using namespace std;

void dis(char arr[][8])
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {cout<<arr[i][j]<<" ";}
    
        cout<<endl;
    }
    
}

int check(char arr[][8],int curri,int currj)
{
    
   //top
    for(int i=curri;i>=0;i--)
    {
        if(arr[i][currj]=='*')
        {return 0;}
    }
    //bottom
    for(int i=curri;i<8;i++)
    {
        if(arr[i][currj]=='*')
        {return 0;}
    }
    //right
    for(int j=currj;j<8;j++)
    {                

        if(arr[curri][j]=='*')
        {return 0;}
    }
    //left
    for(int j=currj;j>=0;j--)
    {

        if(arr[curri][j]=='*')
        {return 0;}
    }
    //top-right
    for(int i=curri,j=currj;i>=0 && j<8;i--,j++)
    {
        
        if(arr[i][j]=='*')
        {return 0;}
    }
    //top-left
    for(int i=curri,j=currj;i>=0 && j>=0;i--,j--)
    {
        
        if(arr[i][j]=='*')
        {return 0;}
    }
    //bottom-right
    for(int i=curri,j=currj;i<8 && j<8;i++,j++)
    { 
        if(arr[i][j]=='*')
        {return 0;}
    }
    //bottom-left
    for(int i=curri,j=currj;i<8 && j>=0;i++,j++)
    {
        
        if(arr[i][j]=='*')
        {return 0;}
    }

    return 1;
}

int main()
{

    char arr[8][8]={{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'}};
   int rowhash[8][8]={{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}};
    
    int i=0;
    do{
        
        int flag=0;
        
        for(int j=0;j<8;j++)
        {
            if(rowhash[i][j]==0 && check(arr,i,j))
            {
                rowhash[i][j]=1;arr[i][j]='*';flag=1;
                

                                 
                break;
            }
        
        
        }
        if(flag)
        {i++;}
        else
        { 
            for(int j=0;j<8;j++)
            {rowhash[i][j]=0;}
            i--;
            for(int j=0;j<8;j++)
            {arr[i][j]='-';}
            
        }
  
                    

    }while(i<8);

    dis(arr);


}
