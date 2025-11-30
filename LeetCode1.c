#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int j = 0; // index for placing non-zero elements

    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, n);

    printf("Output: [");
    for(int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if(i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
