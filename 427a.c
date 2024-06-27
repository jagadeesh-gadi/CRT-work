#include<stdio.h>
int main()
{

  int n,i,un=0,pol=0;
  
  scanf("%d",&n);
   int a[n];
  for( i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
  for(i=0;i<n;i++)
  {
     if(a[i]==-1)
     {
       
        if( pol>0)
        {
          pol-=1;
        }    
        else{
          un+=1;
        }    
     }
     else{
       pol+=a[i];
       
     }
     
  }
  printf("%d",un);
}