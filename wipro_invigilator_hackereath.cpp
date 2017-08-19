#include<bits/stdc++.h>
using namespace std;
static int m=1;
static vector<int> fre;
   void cal(int start, int need)
    { 
    
        
        int flag=0;
        for(int i=0;i<fre.size();i++)
        { 
            if(fre[i]<=start)
            { fre[i]=start+need;flag=1;
                         
             break;}
            
        }
        if(flag==0)
        {int x=start+need;
            m++; 
            fre.push_back(x);
        }
        
    }
   
    


int main()
{ int flag1;

  int test,stud,doubts,tim,student_id,need;
   cin>>test;
for(int j=1;j<=test;j++)
{fre.push_back(0);
       cin>>stud;
       cin>>doubts;
       static vector<int> v;
   for(int i=0;i<doubts;i++)
   { cin>>student_id;
     cin>>tim;
     cin>>need;
     v.push_back(tim);
     v.push_back(need);
     
       
   }
   
   do
   {  flag1=0;
       
       for(int i=0;i<=v.size()-4;i+=2)
       {
           if(v[i]>v[i+2])
           {
               int temp1=v[i];
               v[i]=v[i+2];
               v[i+2]=temp1;
               int temp2=v[i+1];
               v[i+1]=v[i+3];
               v[i+3]=temp2;
               flag1=1;
           }
       }
  }while(flag1==1);
  

     for(int i=0;i<v.size();i=i+2)
     {  int tim1=v[i];
      int need1=v[i+1];
 
     cal(tim1,need1);
     
     }
     v.clear();
     cout<<m<<endl;
    
     m=0;
     fre.clear();
   }
   
}
