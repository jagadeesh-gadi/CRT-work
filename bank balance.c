// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n,x,v,add,sub;
//     int bal = 1000;
//     scanf("%d %d",&n,&bal);
//     printf("choose options \n");
//     printf("1.Check Balance \n2.Deposit Money \n3.Withdraw Money \n4.Exit \n");
 
//    switch(n){
//     case 1:
//       printf("%d bank balance",bal);
//       break;
//     case 2:
//      add=bal+v;
//      scanf("%d",&v);
//      printf(" %d Deposit Money ",add);
//      break;
//     case 3:
//     sub=bal-x;
//     scanf("%d",&x);
//       printf("  %d Withdraw Money ",sub);
//       break;
//     case 4:
//     printf("Exit");
//     break;
//     default:
//     printf("chooose agian");

//    }
// }

// #include <stdio.h>
// #include <conio.h>

// int main() {
//     int n, x, v;
//     int bal = 1000;
//     printf("Choose an option: \n");
//     printf("1. Check Balance \n2. Deposit Money \n3. Withdraw Money \n4. Exit \n");
    
//     scanf("%d", &n);
    
//     switch(n) {
//         case 1:
//             printf("Bank balance: %d\n", bal);
//             break;
//         case 2:
//             printf("Enter amount to deposit: ");
//             scanf("%d", &v);
//             bal += v;
//             printf("%d deposited. New balance: %d\n", v, bal);
//             break;
//         case 3:
//             printf("Enter amount to withdraw: ");
//             scanf("%d", &x);
//             if (x > bal) {
//                 printf("Insufficient balance!\n");
//             } else {
//                 bal -= x;
//                 printf("%d withdrawn.\n New balance: %d\n", x, bal);
//             }
//             break;
//         case 4:
//             printf("Exit\n");
//             break;
//         default:
//             printf("Choose again.\n");
//     }
    
//     getch(); 
//     return 0;
// }

#include <stdio.h>
#include <conio.h>

int main() {
    int n, x, v;
    int bal = 1000;
    int flag = 0;

    while (!flag) {
        printf("Choose an option: \n");
        printf("1. Check Balance \n2. Deposit Money \n3. Withdraw Money \n4. Exit \n");
        scanf("%d", &n);

        switch(n) {
            case 1:
                printf("Bank balance: %d\n", bal);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &v);
                bal += v;
                printf("%d deposited. New balance: %d\n", v, bal);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &x);
                if (x > bal) {
                    printf("Insufficient balance!\n");
                } else {
                    bal -= x;
                    printf("%d withdrawn. New balance: %d\n", x, bal);
                }
                break;
            case 4:
                printf("Exit\n");
                flag= 1;
                break;
            default:
                printf("Choose again.\n");
        }
        if (!flag) {
            printf("\n");
        }
    }

    getch(); 
    return 0;
}




