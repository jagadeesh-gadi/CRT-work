#include<stdio.h>
#include<conio.h>
int main()
{
    int m,s;
    scanf("%d",&m);
    if(m>=90 && m<=100){
        s=1;
    }else if(m>=80 && m<=89){
        s=2;
    }else if(m>=70 && m<=79){
         s=3;
     }else if(m>=60 && m<=69){
        s=4;
     }else if(m>=28 && m<=59){
        s=5;
     }else{
        s=6;
     }


        switch(s){
        case 1:
          printf("A");
        break;
        case 2:
          printf("B");
        break;
        case 3:
          printf("C");
        break;
        case 4:
          printf("D");
        break;
        case 5:
          printf("F");
        break;
        case 6:
          printf("fail");
        break;
        default:
          printf("enter futher process");
        
     }
}