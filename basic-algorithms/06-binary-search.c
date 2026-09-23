#include <stdio.h>

int main() {
    int a[] = {1, 3, 5, 7, 9};
    int n = 5;
    int target = 7;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == target) {
            printf("%d\n", mid);
            return 0;
        } else if (a[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("-1\n");

    /*
    Test Case 1:
    Input: [1,3,5,7,9], target = 7
    Output: 3

    Test Case 2:
    Input: [1,3,5,7,9], target = 2
    Output: -1
    */

    return 0;
}
