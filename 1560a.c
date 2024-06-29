// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         int k;
//          int count = 0, count1 = 1;
//         scanf("%d", &k);
//         while (k > 0) {
//             if (count1 % 3 != 0 && count1 % 10 != 3) {
//                 k--;
//             }
//             count1++;
//         }

        
//         printf("%d\n", count1 --);
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int results[t]; 

    for (int i = 0; i < t; ++i) {
        int k;
        scanf("%d", &k);

        int count = 0;
        int count1 = 1;

        while (k > 0) {
            if (count1 % 3 != 0 && count1 % 10 != 3) {
                count++;
                k--;
            }
            count1++;
        }

        results[i] = count1 - 1; 
    }

    for (int i = 0; i < t; ++i) {
        printf("%d\n", results[i]); 
    }

    return 0;
}

