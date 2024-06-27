// logical output is (nothing);
// logical output is ()

#include<stdio.h>
#include<conio.h>
 int main(){
    int n;

    for(n=-1;n<=10;n++){
        if(n<6){
            continue;
            // another 
            printf("%d \n",n);
        }
        else{
            break;
            printf("bf");
            // aanother method
            //  n++;
        }
    }
 }