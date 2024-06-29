// #include<stdio.h>
// int main(){
//     int t;
//     scanf("%d",&t);
//     while (--)
//     {
//         int n;
//         scanf("%d",&n);
//         if(n==1 || n==2){
//             printf(0);
//         }
//         else if(n%2==0){
//             printf("%d",(n/2)-1);
//         }
//         else{
//             printf("%d",n/2);
//         }
//         return 0;
//     }
// }

// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main() {
   int testcase,i,count=0,*values,a,b,number,j;
   scanf("%d",&testcase);
   
   values=(int *)malloc(testcase*sizeof(int));
   for(i=0;i<testcase;i++){
       scanf("%d",&values[i]);
   }
   for(i=0;i<testcase;i++){
       number=values[i];
       
       a=number-1;
       b=1;
       while(a>b){
           count=count+1;
           a=a-1;
           b=b+1;
       }
       if(count){
        printf("%d",count);   
       }
       else{
          printf("0");
       }
       count=0;
       
      
   }
   
    

    return 0;
}