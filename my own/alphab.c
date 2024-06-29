#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 50

// Function to convert a number to words (handles 0-99)
void number_to_words(int num, char *words) {
    char *units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (num == 0) {
        strcpy(words, "zero");
    } else if (num < 10) {
        strcpy(words, units[num]);
    } else if (num < 20) {
        strcpy(words, teens[num - 10]);
    } else {
        if (num % 10 == 0) {
            strcpy(words, tens[num / 10]);
        } else {
            sprintf(words, "%s-%s", tens[num / 10], units[num % 10]);
        }
    }
}

// Function to compare two strings (used for qsort)
int compare_strings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int numbers[] = {1, 2, 10, 21, 15};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    char words[n][MAX_WORD_LEN];
    char *word_ptrs[n];

    // Convert numbers to words
    for (int i = 0; i < n; i++) {
        number_to_words(numbers[i], words[i]);
        word_ptrs[i] = words[i];
    }

    // Sort the words alphabetically
    qsort(word_ptrs, n, sizeof(char *), compare_strings);

    // Print the sorted words
    printf("Numbers in alphabetical order of their words:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", word_ptrs[i]);
    }

    return 0;
}

