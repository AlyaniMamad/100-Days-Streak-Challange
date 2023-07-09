#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    while (start <= end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    int start = 0;
    int end = 0;

    for (int i = 0; i < length; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, start, end - 1);
            start = i + 1;
        } else {
            end = i;
        }
    }

    reverse(str, start, length - 2);  // Reverse the last word (excluding the newline character)

    printf("Reversed string: %s\n", str);

    return 0;
}
