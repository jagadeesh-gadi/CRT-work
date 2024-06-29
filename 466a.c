// #include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,m,n;
    int mincost=0;
   scanf("%d%d%d%d",&n,&m,&a,&b);
   if(m*a<=b)
   {
    mincost=n*a;
    printf("%d",mincost);
   }
   else
   {
    mincost=n/m;
    int cost=mincost*b;
    int remain=n%m;
    int cost1=remain*a;
     printf("%d",(cost+cost1)<b?(remain)*a:b);
   }
}