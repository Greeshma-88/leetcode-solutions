#include <stdio.h>

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice)
            minPrice = prices[i];

        if (prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;
    }

    printf("%d\n", maxProfit);

    /*
    Test Case 1:
    Input: [7,1,5,3,6,4]
    Output: 5

    Test Case 2:
    Input: [7,6,4,3,1]
    Output: 0
    */

    return 0;
}
