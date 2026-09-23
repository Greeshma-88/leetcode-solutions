#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = malloc(2 * sizeof(int));
                result[0] = i; result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    // Test 1: typical case
    int nums1[] = {2, 7, 11, 15};
    int size1;
    int* res1 = twoSum(nums1, 4, 9, &size1);
    printf("Test 1: [%d, %d] (expected [0, 1])\n", res1[0], res1[1]);
    free(res1);

    // Test 2: edge case - duplicates
    int nums2[] = {3, 3};
    int size2;
    int* res2 = twoSum(nums2, 2, 6, &size2);
    printf("Test 2: [%d, %d] (expected [0, 1])\n", res2[0], res2[1]);
    free(res2);
    return 0;
}
