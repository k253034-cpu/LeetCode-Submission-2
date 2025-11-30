#include <stdio.h>

void reverseString(char s[], int size) {
    int left = 0;
    int right = size - 1;

    while(left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char s[] = {'h','e','l','l','o'};
    int size = sizeof(s) / sizeof(s[0]);

    reverseString(s, size);

    printf("Output: [");
    for(int i = 0; i < size; i++) {
        printf("\"%c\"", s[i]);
        if(i < size - 1) printf(",");
    }
    printf("]\n");

    return 0;
}
