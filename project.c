#include<stdio.h>
#include<conio.h>
int main(){
    int count=3;
    char user[15];
    char pass[10];
    char pass_1[10]="pass";
    char user_1[50]="user";
    while(count>0){
        printf("enter user name \n",user);
        scanf("%s",&user);
        printf("enter password \n",pass);
       scanf("%s",&pass);
    if(strcmp(user,user_1)==0 && strcmp(pass,pass_1)==0){
        printf("login succfully");
        return 0;
    }else{
        count--;
        if(count >0){
                printf("user attaemp %d left \n",count);
        }
    }
    }
        printf("inavlid user name and password !!!!!");
    return 0;
}