#include <stdio.h>

int fun(char s[], int i) {
    if (s[i] == '\0') {
        return 0;
    }
    int ans = fun(s, i + 1);
    if (s[i] >= 'A' && s[i] <= 'Z') {
        s[i] = s[i] + 32;
    }
    if (s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u') {
        return ans + 1;
    } else {
        return ans;
    }
}

int main() {
    char x[205];
    fgets(x, 205, stdin);
    int countV = fun(x, 0);
    printf("%d\n", countV);
    return 0;
}
