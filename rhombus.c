#include <stdio.h>

int rhombus(int n) {
    if (n == 1)
        return 1;
    else
        return 4 * (n - 1) + rhombus(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", rhombus(n));

    return 0;
}
