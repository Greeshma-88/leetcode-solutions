#include <stdio.h>

int main() {
    int a[] = {0, 1, 0, 3, 12};
    int n = 5;
    int pos = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            a[pos++] = a[i];
    }

    while (pos < n)
        a[pos++] = 0;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    /*
    Test Case 1:
    Input: [0,1,0,3,12]
    Output: [1,3,12,0,0]

    Test Case 2:
    Input: [0]
    Output: [0]
    */

    return 0;
}
