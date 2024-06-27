#include<stdio.h>
#include<conio.h>

int main(){
    int w;
    printf("enter the w value ");
    scanf("%d",&w);
    if(w%2==0 && w>2){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}