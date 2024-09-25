#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y, d;
        scanf("%d %d %d %d", &n, &x, &y, &d);

        if (y == x) {
            printf("Yes\n"); 
            continue;
        }

        int forwardSteps = (y - x + d - 1) / d;
        int backwardSteps = (x - 1 + d - 1) / d + ((x - y) % d == 0 ? 1 : INT_MAX);
        int lastPageSteps = (n - x + d - 1) / d + ((n - y) % d == 0 ? 1 : INT_MAX);

        int minSteps = forwardSteps;
        if (backwardSteps < minSteps) minSteps = backwardSteps;
        if (lastPageSteps < minSteps) minSteps = lastPageSteps;

        if (minSteps == INT_MAX) {
            printf("No\n"); 
        } else {
            printf("Yes\n"); 
        }
    }

    return 0;
}
