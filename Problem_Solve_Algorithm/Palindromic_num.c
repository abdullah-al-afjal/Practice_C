#include <stdio.h>

int isPalindrome(int n) {
    int original = n;
    int result = 0;

    while (n > 0) {
        int digit = n % 10;
        result = result * 10 + digit;
        n /= 10;
    }
    return original == result;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; ++i) {
        int n;
        scanf("%d", &n);

        if (isPalindrome(n)) {
            printf("Case %d: Yes\n", i);
        } else {
            printf("Case %d: No\n", i);
        }
    }

    return 0;
}
