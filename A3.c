#include <stdio.h>
#include <string.h>

// Function prototypes
void scenario1_string_library();
void scenario2_character_array();

int main() {
    printf("Scenario 1: Using String Library\n");
    scenario1_string_library();

    printf("\nScenario 2: Using Character Array\n");
    scenario2_character_array();

    return 0;
}

// Scenario 1: Using String Library
void scenario1_string_library() {
    // String initialization
    char str1[] = "Hello";
    char str2[] = "World";

    // 1. String Comparison
    if (strcmp(str1, str2) == 0) {
        printf("1. Strings are equal\n");
    } else {
        printf("1. Strings are not equal\n");
    }

    // 2. String Concatenation
    strcat(str1, str2);
    printf("2. Concatenated String: %s\n", str1);

    // 3. String Reversal
    strrev(str1);
    printf("3. Reversed String: %s\n", str1);

    // 4. Length Comparison
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 == len2) {
        printf("4. String lengths are equal\n");
    } else {
        printf("4. String lengths are not equal\n");
    }
}

// Scenario 2: Using Character Array
void scenario2_character_array() {
    // Character array initialization
    char arr1[20] = "Hello";
    char arr2[20] = "World";

    // 1. String Comparison
    int compareResult = 1; // Initialize to a non-zero value
    for (int i = 0; arr1[i] != '\0' && arr2[i] != '\0'; ++i) {
        if (arr1[i] != arr2[i]) {
            compareResult = 0;
            break;
        }
    }

    if (compareResult) {
        printf("1. Strings are equal\n");
    } else {
        printf("1. Strings are not equal\n");
    }

    // 2. String Concatenation
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);

    for (int i = 0; i < len2; ++i) {
        arr1[len1 + i] = arr2[i];
    }

    printf("2. Concatenated String: %s\n", arr1);

    // 3. String Reversal
    int start = 0;
    int end = len1 + len2 - 1;

    while (start < end) {
        // Swap characters
        char temp = arr1[start];
        arr1[start] = arr1[end];
        arr1[end] = temp;

        // Move to the next pair of characters
        ++start;
        --end;
    }

    printf("3. Reversed String: %s\n", arr1);

    // 4. Length Comparison
    if (len1 == len2) {
        printf("4. String lengths are equal\n");
    } else {
        printf("4. String lengths are not equal\n");
    }
}