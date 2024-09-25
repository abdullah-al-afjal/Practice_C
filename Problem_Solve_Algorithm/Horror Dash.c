#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int c = 1; c <= T; c++) {
        int N;
        scanf("%d", &N);
        int max_speed = 0;
        
        for (int i = 0; i < N; i++) {
            int speed;
            scanf("%d", &speed);
            if (speed > max_speed) {
                max_speed = speed;
            }
        }

        printf("Case %d: %d\n", c, max_speed);
    }

}
