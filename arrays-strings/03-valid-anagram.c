#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";
    int count[26] = {0};
    int valid = 1;

    if (strlen(s) != strlen(t)) {
        valid = 0;
    } else {
        for (int i = 0; s[i] != '\0'; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                valid = 0;
                break;
            }
        }
    }

    printf("%s\n", valid ? "true" : "false");

    /*
    Test Case 1:
    Input: anagram, nagaram
    Output: true

    Test Case 2:
    Input: rat, car
    Output: false
    */

    return 0;
}
