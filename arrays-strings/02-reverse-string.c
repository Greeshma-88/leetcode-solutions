#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello";
    int left = 0, right = strlen(s) - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }

    printf("%s\n", s);

    /*
    Test Case 1:
    Input: hello
    Output: olleh

    Test Case 2:
    Input: a
    Output: a
    */

    return 0;
}
