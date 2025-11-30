#include <stdio.h>

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;

    int j = 1; // index for placing next unique element

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[j - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }

    return j; // number of unique elements
}

int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, n);

    printf("k = %d\nnums = [", k);
    for (int i = 0; i < n; i++) {
        if (i < k)
            printf("%d", nums[i]);
        else
            printf("_");

        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
