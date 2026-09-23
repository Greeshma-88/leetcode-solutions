#include <stdio.h>

int main() {
    char s[] = "()[]{}";
    char stack[100];
    int top = -1;
    int valid = 1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else {
            if (top == -1) {
                valid = 0;
                break;
            }

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{')) {
                valid = 0;
                break;
            }
        }
    }

    if (top != -1)
        valid = 0;

    printf("%s\n", valid ? "true" : "false");

    /*
    Test Case 1:
    Input: ()[]{}
    Output: true

    Test Case 2:
    Input: (]
    Output: false
    */

    return 0;
}
