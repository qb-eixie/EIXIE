//string funtions implementations.

#include <stdio.h>
#include <string.h>

void substr(char source[], char target[], int startIndex, int endIndex) {
    int length = strlen(source);
    
    if (startIndex < 0 || startIndex >= length || endIndex >= length || startIndex > endIndex) {
        printf("Invalid indices\n");
        return;
    }
    
    int i, j = 0;
    for (i = startIndex; i <= endIndex; i++) {
        target[j] = source[i];
        j++;
    }
    target[j] = '\0'; 
}

// void str_equals(char str1[], char str) {

// }